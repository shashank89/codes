//
//  main.cpp
//  SwapCountInsertion
//
//  Created by Shashank on 20/09/14.
//  Copyright (c) 2014 Shashank. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

   int length=0;
    cin>>length;
    int* arr=(int*)malloc(sizeof(int)*length);
    
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    
    int index=0;
    int count=0;
    for(int i=1;i<length;i++)
    {
        index=i-1;
        int marker=i;
        while(index>=0 && arr[marker]<arr[index])
        {
            int temp=arr[index];
            arr[index]=arr[marker];
            arr[marker]=temp;
            marker--;
            index--;
            count++;
        }
    }
    
    std::cout<<count<<"\n";
    
    return 0;
}

