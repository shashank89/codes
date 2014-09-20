//
//  main.cpp
//  makeit anagram
//
//  Created by Shashank on 20/09/14.
//  Copyright (c) 2014 Shashank. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    int* firstvalue=(int*)malloc(sizeof(int)*256);
    int* secondvalue=(int*)malloc(sizeof(int)*256);
    memset(firstvalue, 0, 256);
    memset(secondvalue,0, 256);
    string first="", second="";
    cin>>first;
    cin>>second;
    for(int i=0;i<first.length();i++)
    {
        firstvalue[first[i]]=firstvalue[first[i]]+1;
    }
    for(int i=0;i<second.length();i++)
    {
        secondvalue[second[i]]=secondvalue[second[i]]+1;
    }
    int count=0;
    for(int i=0;i<256;i++)
    {
        count=count+abs(firstvalue[i]-secondvalue[i]);
    }
    cout<<count;
    return 0;
}

