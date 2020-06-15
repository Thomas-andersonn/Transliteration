#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <vector>
#define maxsize 26
#define maxword 100
#define input_max 100
#define CharToIdx(c) ((int)c-(int)'a')

using namespace std;

typedef struct TrieNode Node;

struct TrieNode {
Node* children[maxsize];
vector<string> words;
vector<int> confidence;
int word_counts;
//char key;
};
vector<Node* > temp;
//Initialize new node
Node* getNode(void)
{
    Node *pnode=NULL;
    pnode=new Node;
    if(pnode)
    {
        for(int i=0;i<maxsize;i++)
        {
            pnode->children[i]=NULL;
        }

        pnode->word_counts=0;
        //pnode->key=NULL;
    }
    return pnode;
}

//int indexi=0;
ofstream coutt("output_tes.txt");
void deserialize(Node *currentNode,ifstream &myfile)
{
    while(!myfile.eof())
    {

        char currentChar=myfile.get();
        //coutt<<currentChar<<endl;
        char s[100];
        //cout<<currentChar;
        if(currentChar!=']')
        {

            currentNode->children[currentChar-'a']=getNode();
            char ch=myfile.get();
            //cout<<ch<<" ";
		int noOfWords;
		if(isdigit(ch))
		{
			myfile.unget();
            		 myfile>>noOfWords;
		}
            currentNode->children[currentChar-'a']->word_counts=noOfWords;
            for(int i=0;i<noOfWords;i++)
            {
                myfile.getline(s,100,',');
                currentNode->children[currentChar-'a']->words.push_back(s);
                //coutt<<s<<endl;
            }

            //cout<<indexi++<<" ";
            deserialize(currentNode->children[currentChar-'a'],myfile);

        }
        else
        {
            return;
        }

    }

}

ofstream myfile("new1.txt");

void serializeTrie(Node* root)
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
            //myfile<<"*";
            serializeTrie(root->children[i]);
        }
    }
    myfile<<"]";
}


void searchNode(Node* root,const string &str)
{
    int lvl,idx,flag=0;
    int length=str.size();
    Node *pcrawl=root;
    for(int lvl=0;lvl<length;lvl++)
    {
        idx=CharToIdx(str[lvl]);
        //myfile<<idx<<" ";
        //myfile<<pcrawl->children[idx]->key<<" ";
        if(!pcrawl->children[idx])
        {
            cout<<"Word not present\n";
            flag=1;
            break;
        }
        //cout<<pcrawl->children[idx]->word_counts<<" ";
        pcrawl=pcrawl->children[idx];
    }
    if(!flag)
    {
        cout<<"Word found\n";
        //cout<<pcrawl->word_counts<<endl;
        for(int j=0;j<pcrawl->words.size();j++)
        coutt<<pcrawl->words[j]<<endl;
    }

}


int main(int argc, char** argv)
{
    ifstream myfile("serialized_complete_output.txt");
    Node* root=getNode();
    deserialize(root,myfile);
    //serializeTrie(root);
    //cout<<"Enter the word to search: ";
    string st;
    //cin>>st;
    //searchNode(root,st);
    //system("output_tes.txt");
    myfile.close();
}



