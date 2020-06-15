#include<bits/stdc++.h>
#include"mymap_english_to_hindi.h"
using namespace std;
#include<fstream>
#define slot 2
string stringToConvert;
int LENGTH;
bool checkVowel(char t)
{
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
        return true;
    else
        return false;
}
bool isMatra(string s)
{
    if(int(s[1])>=-91)
        return true;
    if(int(s[2])>=-123&&int(s[2])<=-71)
        return false;
    return true;
}
vowelVowel(string &ans,string current,string prev)
{

}
void printHindi(string ans,string temp,int index,ofstream &myfile)
{
    if(index>=LENGTH)
    {
        myfile<<ans<<endl;
    }

    vector <string> v;
    int j;
    if(index!=0)
    {
        temp=ans.substr(ans.length()-3,3);
    }
    for(j=0;j<slot;j++)
    {
        string s="";
        if(j==0)
            s+=stringToConvert[index];
        else if(j==1)
        {
            if(index!=LENGTH-slot+1){
                s+=stringToConvert[index];
                s+=stringToConvert[index+1];
            }
        }

        if(mymap.find(s)!=mymap.end())
        {
            //cout<<s<<" ";
            v=mymap[s];
            int l=v.size();
            for(int i=0;i<l;i++)
            {
                if(j==0)
                {
                    int t=checkVowel(stringToConvert[index]);
                    if(index!=0&&t==1)
                    {
                            if(isMatra(v[i]))
                            {

                                if(temp!="ं"&&temp!="ँ")
                                {
                                    if(isMatra(temp))
                                    {
                                        if(v[i]=="ं"||v[i]=="ँ")
                                        printHindi(ans+v[i],temp,index+1,myfile);
                                    }
                                    else
                                    {
                                        printHindi(ans+v[i],temp,index+1,myfile);
                                    }

                                }
                                else
                                {
                                    printHindi(ans,temp,index+1,myfile);
                                    break;
                                }
                            }


                    }
                    else if(index!=0&&t==0)
                    {
                        printHindi(ans+v[i],temp,index+1,myfile);
                        if(!isMatra(temp)&&!checkVowel(stringToConvert[index-1]))
                        {
                            printHindi(ans+"्"+v[i],temp,index+1,myfile);
                        }
                    }
                    else
                    {
                        if(!isMatra(v[i]))
                            printHindi(ans+v[i],temp,index+1,myfile);
                    }
                }
                else if(j==1)
                {
                    int t=(checkVowel(s[0])||checkVowel(s[1]));
                    if(index!=0&&t==1)
                    {
                            if(isMatra(v[i]))
                            {
                                if(temp!="ं"&&temp!="ँ")
                                {
                                    if(isMatra(temp))
                                    {
                                        if(v[i]=="ं"||v[i]=="ँ")
                                        printHindi(ans+v[i],temp,index+2,myfile);
                                    }
                                    else
                                    {
                                        printHindi(ans+v[i],temp,index+2,myfile);
                                    }

                                }
                                else
                                {
                                    printHindi(ans,temp,index+1,myfile);
                                    break;
                                }
                            }
                    }
                    else if(index!=0&&t==0)
                    {
                        printHindi(ans+v[i],temp,index+2,myfile);
                        if(!isMatra(temp)&&!checkVowel(stringToConvert[index-1]))
                        {
                            printHindi(ans+"्"+v[i],temp,index+2,myfile);
                        }
                    }
                    else
                    {
                        if(!isMatra(v[i]))
                            printHindi(ans+v[i],temp,index+2,myfile);
                    }

                }
            }
        }
        else
            return;
    }
}
int main()
{
    ofstream myfile;
    myfile.open("english_hindi_output.txt");
    stringToConvert="shubham";
	myfile<<stringToConvert<<endl;
    LENGTH=stringToConvert.size();
    string ans;
    printHindi("","",0,myfile);
    myfile.close();

}
