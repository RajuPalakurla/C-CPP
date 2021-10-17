//
//  Diamond.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 24/11/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include "Headerfiles.hpp"

using namespace std;
void Diamond(int line)
{
    cout<<"Diamond pattern :"<<endl;
    int count = 1;
    for(int i = 1;i<line;i++)
    {
        for(int j = 0;j < line-i;j++)
            cout<<"  ";
        
        for(int k = 0;k<count;k++)
            cout<<"* ";
        cout<<endl;
        count+=2;
    }
    for(int i = line;i>0;i--)
    {
        for(int j = 0;j < line-i;j++)
        {
            cout<<"  ";
        }
        for(int k = 0;k<count;k++)
            cout<<"* ";
        cout<<endl;
        count -=2;
    }
}


void Num_Diamond(int line)
{
    cout<<"Number Diamond pattern :"<<endl;
    int count = 1;
    int printval = 1;
    for(int i = 1;i<=line;i++)
    {
        for(int j = 0;j < line-i;j++)
            cout<<"  ";
        
        for(int k = 0;k<count;k++)
            cout<<printval++<<" ";
        cout<<endl;
        count+=2;
    }
    printval -=count-1;
    count -=4;
    for(int i = line;i>1;i--)
    {
        for(int j = 0;j <= line-i;j++)
            cout<<"  ";
        for(int k = 0;k<count;k++)
            cout<<printval--<<" ";
        cout<<endl;
        count -=2;
    }
}
