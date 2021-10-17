#include<iostream>
using namespace std;

template <typename T1,typename T2>
class BasicOperation{
    T1 value1,Value2;
    BasicOperation(T1 val1,T2 val2){
        value1=val1;
        Value2=val2;
    }
    inline T1 sum(){
        return value1+Value2;
    }

    inline T1 sub(){
        return value1-Value2;
    }

    inline T1 mul(){
        return value1*Value2;
    }

    inline T1 div(){
        return value1/Value2;
    }
    
    void displayOperations();
};

void BasicOperation::displayOperations(){
    cout<<"Sum Value is : "<<sum()<<endl;
    cout<<"sub Value is : "<<sub()<<endl;
    cout<<"mul Value is : "<<mul()<<endl;
    cout<<"Div Value is : "<<div()<<endl;
}

int main(){
    BasicOperation<int,int> *obj=new BasicOperation<int,int>(30,10);
    obj->displayOperations();
}