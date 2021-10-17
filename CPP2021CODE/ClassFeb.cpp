#include<iostream>
using namespace std;

class Feb_Rec{
    
    public:
    int num1,num2,num3,len;
    Feb_Rec(int num1,int num2,int len){
        this->num1=num1;
        this->num2=num2;
        this->len=len;
    }
    void print_feb();
    void print_recfeb(int num1,int num2,int len);
};

void Feb_Rec::print_feb(){
    cout<<num1<<" "<<num2;
    while(len-2>0){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        cout<<" "<<num3;
        len-=1;
    }
}

void Feb_Rec::print_recfeb(int num1,int num2,int len){
    if(len-1 > 0){
        int num3=num1+num2;
        cout<<" "<<num3;
        print_recfeb(num2,num2+num1,len-1);
    }
}
int main()
{
    Feb_Rec *obj=new Feb_Rec(1,1,10);
    cout<<"First round Febnocci series"<<endl;
    obj->print_feb();
    cout<<"\nSecond round Febnocci series"<<endl;
    cout<<"10 20";
    obj->print_recfeb(10,20,10);
    cout<<endl;
}