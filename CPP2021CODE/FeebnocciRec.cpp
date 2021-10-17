#include<iostream>
using namespace std;
void feb_rec(int num1,int num2,int len){
    if(len > 0){
        cout<<" "<<num1+num2;
        feb_rec(num2,num1+num2,len-1);
    }
}
int main()
{
    int num1=1,num2=1,num3=0,len=10;
    cout<<num1<<" "<<num2;
    feb_rec(num1,num2,len-2);
    cout<<endl;
}