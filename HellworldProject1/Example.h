//
//  Example.h
//  HellworldProject1
//
//  Created by Raju Palakurla on 07/11/17.
//  Copyright © 2017 Raju Palakurla. All rights reserved.
//

#ifndef Example_h
#define Example_h
#include<iostream>

using namespace std;

template<class A,class B>
class Example
{
public:
    A val1,val2;
    B val3;
    Example(A x,B y);
    void sum(A x ,B y);
};
//#include "Example.cpp"
#endif /* Example_h */
