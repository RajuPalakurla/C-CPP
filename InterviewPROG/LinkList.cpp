//
//  LinkList.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 01/12/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include "Headerfiles.hpp"

using namespace std;
Node *pHeader = NULL;
void insert(int Value)
{
    Node *newEle = new Node;
    Node *temp,*prev;
    newEle->Value = Value;
    newEle->pNode = NULL;
    if(pHeader == NULL)
    {
        pHeader = newEle;
        return;
    }
    
    temp = pHeader;
    for(;temp!=NULL;temp=temp->pNode)
        prev = temp;
    prev->pNode = newEle;
}

void Display()
{
    Node *temp;
    temp = pHeader;
    for(;temp!=NULL;temp=temp->pNode)
        cout<<temp->Value<<"  "<<endl;
}
void reverseList()
{
    Node *cur,*prev=NULL,*next=NULL;
    if(pHeader==NULL)
        return;
    cur=pHeader;
    for(;cur!=NULL;)
    {
        next = cur->pNode;
        cur->pNode = prev;
        prev = cur;
        cur = next;
    }
    pHeader = prev;
}
void sortele(int a[],int size,int max)
{
    int b[10] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i = 0;i<size;i++)
        b[a[i]]++;
    
    for(int j = max;j>=0;j--)
    {
        for(int k = 0;k<b[j];k++)
            cout<<j<<"  ";
    }
    
}
