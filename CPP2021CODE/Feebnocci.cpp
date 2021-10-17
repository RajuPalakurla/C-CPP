#include<iostream>
using namespace std;
int main()
{
    int num1=1,num2=1,num3=0,len=10;
    cout<<num1<<" "<<num2;
    while(len-2>0){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        cout<<" "<<num3;
        len-=1;
    }
}