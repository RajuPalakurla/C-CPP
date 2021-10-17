#include<iostream>
using namespace std;

struct Node{
    int value;
    Node *lptr;
    Node *rptr;
};

class Queue{
    public:
    Node *front;
    Node *rare;
    Queue(){
        front=NULL;
        rare=NULL;
    }
    void pushfront(int value);
    void pushrare(int value);
    int popfront();
    int poprare();
    void displayQueueDataFromFront();
    void displayQueueDataFromRare();
};

void Queue::pushfront(int value){
    Node *data = new Node();
    data->value=value;
    data->rptr=NULL;
    data->lptr=NULL;
    if(front==NULL){
        front=data;
        rare=data;
    }
    else{
        data->rptr=front;
        front->lptr=data;
        front=data;
    }
}

void Queue::pushrare(int value){
    Node *data = new Node();
    data->value=value;
    data->rptr=NULL;
    data->lptr=NULL;
    if(rare==NULL){
        front=data;
        rare=data;
    }
    else{
        data->lptr=rare;
        rare->rptr=data;
        rare=data;
    }
}

int Queue::popfront(){
    Node *delEle=NULL;
    int retval=0;
    if(front==NULL){
        cout<<"No elements to pop in Queue";
    }
    else{
        delEle=front;
        if(front->rptr!=NULL)
            front=front->rptr;
            front->lptr=NULL;
        else{
            front=NULL;
            rare=NULL;
        }
        retval=delEle->value;
        if(delEle != NULL)
            delete delEle;
    }
    return retval;
}

int Queue::poprare(){
    Node *delEle=NULL;
    int retval=0;
    if(rare==NULL){
        cout<<"No elements to pop in Queue";
    }
    else{
        delEle=rare;
        if(rare->lptr!=NULL)
            rare=rare->lptr;
            rare->rptr=NULL;
        else{
            rare=NULL;
            front=NULL;
        }
        retval=delEle->value;
        if(delEle != NULL)
            delete delEle;
    }
    return retval;
}

void Queue::displayQueueDataFromFront(){
    Node *iterable=front;
    if(iterable == NULL){
        cout<<"No ELements in Queue to Display";
        return;
    }
    cout<<iterable->value;
    iterable=iterable->rptr;
    while(iterable != NULL){
        cout<<" "<<iterable->value;
        iterable=iterable->rptr;
    }
}

void Queue::displayQueueDataFromRare(){
    Node *iterable=rare;
    if(iterable == NULL){
        cout<<"No ELements in Queue to Display";
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
    Queue *qObj=new Queue();
    while(1){
        int choice=0;
        cout<<"\nQueue operations\n";
        cout<<"1. Push element into Queue from front\n";
        cout<<"2. Push element into Queue from rare\n";
        cout<<"3. Pop element from Queue from front\n";
        cout<<"4. Pop element from Queue from rare\n";
        cout<<"5. Display elements from Queue from front\n";
        cout<<"6. Display elements from Queue from rare\n";
        cout<<"7. Exit\n";
        cout<<"Please select your choice: ";
        cin>>choice;
        int value;
        switch(choice){
            case 1:
            case 2: cout<<"please enter value to push into Queue";
                    cin>>value;
                    if(choice==1)
                        qObj->pushfront(value);
                    else
                        qObj->pushrare(value); 
                    cout<<value<<" pushed successfully into Queue (front/rare):"<<endl;
                    break;

            case 3: cout<<"Popped element from Front= "<<qObj->popfront();
                    break;

            case 4: cout<<"Popped element from Rare = "<<qObj->poprare();
                    break;
            case 5: qObj->displayQueueDataFromFront();
                    break;
            case 6: qObj->displayQueueDataFromRare();
                    break;
            case 7: exit(0);
            default: cout<<"You have entered incorrect choice "<<choice<<" Please correct value";
        }
    }
}