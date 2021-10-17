//
//  Seclore.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 23/11/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include "Headerfiles.hpp"
using namespace std;
void WordCount(char *str)
{
    int wordcount = 0,vowelcount = 0,maxvow = 0 ;
    char c;
    char a[] = "aeiouAEIOU" ;
    for (int i = 0; i<=strlen(str); i++) {
        if(str[i] == ' ' || str[i] == '\0')
        {
            wordcount++;
            if(vowelcount > maxvow)
                maxvow = vowelcount ;
            vowelcount = 0;
        }
        c=str[i];
        if(strchr(a,c))
            vowelcount++;
    }
    cout<<"Number of Words :"<<wordcount<<endl;
    cout<<"Max Vowel :"<<maxvow<<endl;
}

char* reverseString( char* input )
{
    size_t len = strlen( input );
    char *a = (char *) malloc(len);
    char tmp = input[ len - 1 ];
    a[0] = tmp;
    if( len > 1 )
    {
        for( int i = len - 1; i > 0; i-- )
            a[i] = input[ i - 1 ];
      
        a[len]='\0';
        input = a;
        reverseString( input + 1 );
    }
    delete a;
    return input;
}


