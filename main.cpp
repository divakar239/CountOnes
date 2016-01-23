//
//  main.cpp
//  CountOnes
//
//  Created by Divakar Kapil on 2015-10-06.
//  Copyright © 2015 Divakar Kapil. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
   
  int number;
    cout<<"Please enter a positive number "<<endl;
    cin>>number;
    
    int n=number;
    int sum=number&0x01;
    
    while((number=number>>1))
    {
        sum=sum+(number&0x01);
    }
    

    /* for(int x=0;x<7;x++)
    {
        sum= number & 0x01;
        number=number>>1;
        sum=sum+(number & 0x01);
        
    } */

    
    
    cout<<"The number of 1s in the binary form of "<<n<<" are "<<sum<<endl;
    
    return 0;
}



