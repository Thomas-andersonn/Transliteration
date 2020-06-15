#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cinn("crawled.txt");
    ofstream coutt("refined_crawled.txt");
    string s;

    while(!cinn.eof())
    {
    cinn>>s;
    int t=s[0];
    if(t<0)
    {
        coutt<<s<<endl;
    }
    }
    cinn.close();
    coutt.close();

}
