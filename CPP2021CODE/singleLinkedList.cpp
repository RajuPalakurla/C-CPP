#include<iostream>
using namespace std;
class Node{
    int value;
    Node *next;
    Node(){
        value=0;
        next=NULL;
    }
}

class SingleLinkedList{
    Node *head,*tail;
    SingleLinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int);
    void Display();
    void reverseList();
    void deleteElement(int);
    void pushiniddle(int,int);
}

void SingleLinkedList::push(int value){
    Node *data=new Node();
    data->value=value;
    data->next=NULL;
    if(root == NULL){
        root=data;
        tail=data;
        return;
    }
    Node *iteror=root,*prev;
    while(iteror){
        if(iteror->next==NULL){
            iteror->next=data;
            tail=data;
            break;
        }
        iteror=iteror->next;
    }
}

void SingleLinkedList::pushiniddle(int value,int index){
    Node *data=new Node();
    data->value=value;
    data->next=NULL;
    Node *iteror=root,*prev;
    int pos=0;
    if(index<getlistlen()){
        while(iteror){
            pos++;
            if(index==pos){
                prev->next=data;
                data->next=next;
            }
            pre=iteror;
        }
    }
    else
        cout<<"Element can not insert due to given position is not valid"
}

void SingleLinkedList::Display(int value,int index=0){
    Node *iteror=root;
    while(iteror){
        cout<<iteror->value<<" ";
        iteror=iteror->next;
    }
}

void SingleLinkedList::getlistlen(){
    Node *iteror=root;
    int len=0;
    while(iteror){
        len++;
        iteror=iteror->next;
    }
    return len;
}

void SingleLinkedList::reverseList(int value,int index=0){
    Node *prev,*curr=root,next;
    if(root==NULL)
        return;
    prev=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    root=prev;
}

void SingleLinkedList::deleteElement(int value){
    Node *iteror=root,*delValue=NULL,*prev=NULL;
    while(iteror){
        if(iteror->value==value){
            delEle=iteror;
            break;
        }
        prev=iteror;
        iteror=iteror->next;
    }
    if(delEle!=NULL){
        if(prev!=NULL)
            prev->next=delEle->next;
        else{
            head=delEle->next;
        }
        delete delEle;
        cout<<"Element successfully deleted";
    }
    else
        cout<<"given element is not found to delete";
}