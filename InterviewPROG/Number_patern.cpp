//
//  Number_patern.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 08/01/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include "Headerfiles.hpp"
using namespace std;

void number_pattern(int max_num,int lines)
{
    int row_el = max_num/lines;
    int line_num = 1,print_val;
    for(int i = max_num;i>=1;i--)
    {
        print_val = i ;
       //cout<<" print value "<<print_val<<endl;
        for(int j=1;j<=row_el;j++)
        {
            //print_val = i;
            if(line_num%2==0){
                cout<<print_val-row_el+j<< " ";
            }
            else
                cout<<print_val--<<" ";
        }
        cout<<endl;
        i-=row_el-1;
        line_num++;
    }
    
}

void subsetArray(int a[],int size)
{
    //int j = 0;
    for(int len = 1;len<=size;len++)
    {
        for(int i = 0;i<=size-len;i++)
        {
            int j = i+len-1;
            int sum = 0;
            for (int k = i;k<=j;k++)
            {
                cout<<a[k]<<" ";
                sum+= a[k];
            }
            cout<<": sum is "<<sum<<endl;
        }
    }
}
