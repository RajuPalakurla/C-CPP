//
//  DLinkList.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 27/11/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *rNode;
    Node *lNode;
    Node()
    {
        rNode = NULL;
        lNode = NULL;
    }
};

class DLinkList
{
public:
    Node *headNode ;
    Node *tailNode ;
    DLinkList()
    {
        headNode = NULL;
        tailNode = NULL;
    }
    void insertelement(int Value);
    void displayElements();
};

void DLinkList::insertelement(int Value)
{
    Node *tempNode,*newNode = new Node();
    newNode->Value = Value;
    newNode->rNode = NULL;
    newNode->lNode = NULL;
    if(headNode == NULL)
        headNode = tailNode= newNode;
    else
    {
        tempNode = headNode;
        if(tempNode->Value >= Value)
        {
            newNode->rNode = tempNode;
            tempNode->lNode = newNode;
            headNode = newNode;
        }
        else
        {
            for(;tempNode!=NULL;tempNode = tempNode->rNode)
            {
                if(tempNode->rNode!=NULL)
                {
                    if(tempNode->Value <= Value && tempNode->rNode->Value>=Value)
                    {
                        newNode->rNode = tempNode->rNode;
                        newNode->lNode = tempNode ;
                        tempNode->rNode->lNode = newNode;
                        tempNode->rNode = newNode ;
                    }
                }
                else
                {
                    tempNode->rNode = newNode;
                    newNode->lNode = tempNode ;
                    tailNode = newNode ;
                }
            }
        }
    }
}

void DLinkList::displayElements()
{
    Node *tempNode = headNode ;
    if (tempNode==NULL)
        cout<<"There are no elements in DLinkLIst"<<endl;
    cout<<"Ascending Order elements from DlinkList"<<endl;
    for (; tempNode; tempNode=tempNode->rNode)
        cout<<tempNode->Value<<"  ";
    cout<<"descending Order elements from DlinkList"<<endl;
    tempNode = tailNode;
    for(;tempNode!=NULL;tempNode=tempNode->lNode)
        cout<<tempNode->Value<<"  ";
}
