//
//  Example.cpp
//  HellworldProject1
//
//  Created by Raju Palakurla on 07/11/17.
//  Copyright © 2017 Raju Palakurla. All rights reserved.
//

#include "Example.h"

template<class A,class B>
Example<A,B>::Example(A x,B y)
{
    val1 = x;
    val3 = y;
    cout<<"sum value is : "<<x+y<<endl;
}

template <class A,class B>
void Example<A,B>::sum(A x,B y) {
    val3 = x+y;
    cout<<"Sum value is :"<<val3<<endl;
}

/*void TempFunction()
{
    Example<int,int> tempobj(10,10);
}*/

