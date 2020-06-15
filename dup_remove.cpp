#include<bits/stdc++.h>

using namespace std;

int main()
{
    ifstream rfile("refined_crawled.txt");
    ofstream rfile1("final_crawled.txt");
    string curr,prev;
    int i=0;
    while(!rfile.eof())
    {
        rfile>>curr;
        if(i==0)
        {
            rfile1<<curr<<endl;
            prev=curr;
        }
        else
        {
            if(prev!=curr)
            {
                rfile1<<curr<<endl;
                prev=curr;
            }
        }
        i=1;
    }
    rfile1.close();
    rfile.close();
}
