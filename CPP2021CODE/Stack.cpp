#include<iostream>
using namespace std;

struct Node{
    int value;
    Node *lptr;
    Node *rptr;
};

class Stack{
    public:
    Node *top;
    Stack(){
        top=NULL;
    }
    void push(int value);
    int pop();
    void displayStackData();
};

void Stack::push(int value){
    Node *data = new Node();
    data->value=value;
    data->rptr=NULL;
    data->lptr=NULL;
    if(top==NULL){
        top=data;
    }
    else{
        top->rptr=data;
        data->lptr=top;
        top=data;
    }
}

int Stack::pop(){
    Node *delEle=NULL;
    int retval=0;
    if(top==NULL){
        cout<<"No elements to pop in Stack";
    }
    else{
        delEle=top;
        top=top->lptr;
        retval=delEle->value;
        if(delEle != NULL)
            delete delEle;
    }
    return retval;
}

void Stack::displayStackData(){
    Node *iterable=top;
    if(iterable == NULL){
        cout<<"No ELements in Stack to Display";
        return;
    }
    cout<<iterable->value;
    iterable=iterable->lptr;
    while(iterable != NULL){
        cout<<" "<<iterable->value;
        iterable=iterable->lptr;
    }
}

int main()
{
    Stack *qObj=new Stack();
    while(1){
        int choice=0;
        cout<<"\nStack operations\n";
        cout<<"1. Push element into Stack\n";
        cout<<"2. Pop element from Stack\n";
        cout<<"3. Display elements from Stack\n";
        cout<<"4. Exit\n";
        cout<<"Please select your choice: ";
        cin>>choice;
        int value;
        switch(choice){
            case 1: cout<<"please enter value to push into Stack";
                    cin>>value;
                    qObj->push(value);
                    cout<<value<<" pushed successfully into Stack"<<endl;
                    break;
            case 2: cout<<"Popped element = "<<qObj->pop();
                    break;
            case 3: qObj->displayStackData();
                    break;
            case 4: exit(0);
            default: cout<<"You have entered incorrect choice "<<choice<<" Please correct value";
        }
    }
}