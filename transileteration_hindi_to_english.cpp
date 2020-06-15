#include<iostream>
#include"mymap_hindi_to_english.h"
using namespace std;
string stringToConvert;
vector<string> englishCharCurrent;
vector<string> englishCharPrevious;
int length,len_eng;
bool isMatra(string s)
{
    if(int(s[1])>=-91)
        return true;
    if(int(s[2])>=-123&&int(s[2])<=-71)
        return false;
    return true;
}
int findEnglishChar(string s1)
{
    if(mymap.find(s1)==mymap.end())
        return 0;
    englishCharCurrent=mymap[s1];
    return 1;
}
int printEnglish(ofstream &myfile)
{
    int j,k,flag=0;
    string prev;
    for(int i=0;i<length;i+=3)
    {
        string s1=stringToConvert.substr(i,3);
        if(s1!="्")
        {
        flag=findEnglishChar(s1);
        if(flag==0)
        {
            flag=2;
            break;
        }
        if(i==0)
        {
            englishCharPrevious=englishCharCurrent;
            prev=s1;
        }
        else
        {
            vector<string> temp;
            if((!isMatra(prev)&&!isMatra(s1))/*||prev=="ं"||prev=="ँ"*/)
                for(j=0;j<englishCharPrevious.size();j++)
                    englishCharPrevious[j]+="a";
             if(!isMatra(prev)&&(s1=="ं"||s1=="ँ"))
                for(j=0;j<englishCharPrevious.size();j++)
                    englishCharPrevious[j]+="a";
            for(j=0;j<englishCharPrevious.size();j++)
            {
                for(k=0;k<englishCharCurrent.size();k++)
                {
                        temp.push_back(englishCharPrevious[j]+englishCharCurrent[k]);
                }
            }
            englishCharPrevious=temp;
        }
        }
        prev=s1;
    }
    if(flag==2)
        return 0;
    len_eng=englishCharPrevious.size();
    for(j=0;j<len_eng;j++)
        myfile<<englishCharPrevious[j]<<endl;
    return 1;
}
int main()
{
    ifstream cinn("hindi_complete.txt");
    ofstream myfile;
    myfile.open("english_complete_output.txt");
    ofstream coutt("hindi_complete_output.txt");
    while(!cinn.eof())
    {
        string s;
        cinn>>s;
        stringToConvert=s;
        length=stringToConvert.length();
        int flag=printEnglish(myfile);
        if(flag==1)
        {
            for(int i=0;i<len_eng;i++)
                coutt<<s<<endl;
        }
    }
    myfile.close();
}
