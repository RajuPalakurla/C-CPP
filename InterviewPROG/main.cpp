//
//  main.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 08/01/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//
#include "Headerfiles.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    /*int fact,max_nmbr,lines;
    std::cout << "Hello, World!\n";
    cout<<"Enter value number for Recursive Factorial"<<endl;
    cin>>fact;
    cout<<"factorial value of "<<fact<<" is "<<recusive_fact(fact)<<endl;
    cout<<"Enter number for pattern for max number "<<endl;
    cin>>max_nmbr;
    cout<<"Enter number of rows need in pattern"<<endl;
    cin>>lines;
    number_pattern(16, 4);
    int a[] = {1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"number of elements in array "<<len<<endl;
    int (*pDisplay)(int[],int) = sort_Display;
    cout<<"Before Sort Array"<<endl;
    pDisplay(a,len);
    cout<<"After Sort Array"<<endl;
    name_Sort(a, len);
    pDisplay(a,len);
    cout<<endl;
    
    cout<<"Array sets are bellow "<<endl;
    array_sets(a,4);
    subsetArray(a,4);
    cout<<"********Start Seclore Programs********"<<endl;
    char array[] = "Raju Palakurla Hyderabad" ;
    WordCount(array);
    //char *ptr = "hello";
    //cout<<"reverse String :\n"<<reverseString(ptr)<<endl;
    cout<<"********End   Seclore Programs********"<<endl;
    Diamond(5);
    Num_Diamond(3);*/
    cout<<"*********Dassault System Programs****"<<endl;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    Display();
    reverseList();
    Display();
    int abnb[] = {1,2,1,3,2,3,2,4,5,4,4,5,6,7,6,7,7,9};
    cout<<"size of a is :"<<sizeof(abnb)<<endl;
    int size = sizeof(abnb)/sizeof(abnb[0]);
    sortele(abnb,size,9);
    /*if (pDisplay != NULL) {
        pDisplay = NULL ;
    }*/
    return 0;
}
