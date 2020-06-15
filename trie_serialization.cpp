#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <bits/stdc++.h>
#define maxsize 26
#define maxword 100
#define input_max 100
#define CharToIdx(c) ((int)c-(int)'a')
using namespace std;
typedef struct TrieNode Node;
ifstream cinn("hindi_complete_output.txt");
struct TrieNode {
Node* children[maxsize];
vector<string> words;
int word_counts;
};
vector<Node* > temp;
//Initialize new node
Node* getNode(void)
{
    //cout<<"error lies here1"<<endl;
    Node *pnode=NULL;
    //pnode=(Node*)calloc(1,sizeof(Node));
    pnode=new Node;
    //cout<<"error lies here2"<<endl;
    if(pnode)
    {
        for(int i=0;i<maxsize;i++)
        {
            pnode->children[i]=NULL;
        }
        pnode->word_counts=0;
    }

    return pnode;

}
/*Inserting the dictionary words in Node.
--if i/p key is new, construct new node
--if prefix of existing key, traverse till last node of key add the string
*/
ofstream cinnn("inserted_hindi_words.txt");
int insertNode(Node* root, const string &str)
{
    int length=str.size();
    int idx,t=0;
    Node* pcrawl=root;

    for(int lvl=0;lvl<length;lvl++)
    {

        idx=CharToIdx(str[lvl]);
        if(pcrawl->children[idx]==NULL)
        {

            pcrawl->children[idx]=getNode();

        }

        pcrawl=pcrawl->children[idx];
    }

    string s2;
    bool flag=0;
    cinn>>s2;
    int l=pcrawl->words.size();
    //cout<<l<<endl;
    if(flag==0)
    {
        pcrawl->words.push_back(s2);
        pcrawl->word_counts++;
    }
}
ofstream coutt("ok.txt");
void serializeTrie(Node* root,ofstream &myfile)
{
    if(root==NULL) return;//base condition
    for(int i=0;i<maxsize;i++)//for each 26 alphabets
    {
        if(root->children[i])
        {
            int wc=root->children[i]->word_counts;
            myfile<<char(i+'a');
            myfile<<wc;
            for(int j=0;j<wc;j++)
            {
                myfile<<root->children[i]->words[j]<<",";
            }
            serializeTrie(root->children[i],myfile);
        }
    }
    myfile<<"]";
}
int main()
{
    ifstream rfile;//reading from file
    ofstream ofile;//writing to file
    rfile.open("english_complete_output.txt");//contains english word
    ofile.open("serialized_complete_output.txt");//transliterated hindi word
    Node *root=getNode();
	while(!rfile.eof())
    {
        string s1;
        rfile>>s1;
        //cout<<s1<<" ";
        insertNode(root,s1);
    }
    serializeTrie(root,ofile);
	rfile.close();
	ofile.close();
	cinn.close();
	return 0;//Your program should return 0 on normal termination.
}
