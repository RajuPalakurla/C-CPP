//
//  Sort_Numbers.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 10/01/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//


#include"Headerfiles.hpp"
using namespace std;
int name_Sort(int a[],int len){
    for (int i = 0; i<len; i++) {
        for (int j = 0; j<len-i; j++) {
            if(a[j] > a[j+1]){
                a[j] = a[j]+a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
            
        }
    }
    return 0;
}
int sort_Display(int a[],int len){
    for (int i = 0; i<len; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
