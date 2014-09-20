//
//  main.cpp
//  Cative map
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
    char arr[length][length];
    
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1;i<=length-2;i++)
    {
        for(int j=1;j<=length-2;j++)
        {
            if(arr[i-1][j]!='X' && arr[i][j-1]!='X' && arr[i][j+1]!='X' && arr[i+1][j]!='X')
            {
                int value=arr[i][j]-'0';
                
                if(value>(arr[i-1][j]-'0') && value> (arr[i][j-1]-'0') && value> (arr[i][j+1]-'0') && value> (arr[i+1][j]-'0' ))
                {
                    arr[i][j]='X';
                }
            }
        }
    }
    
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    
    
    return 0;
}


