/*

pattern type:

*********
 *******
  *****
   ***
    *


created by Anilabha Baral


*/



#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i=n;i>=1;i--)//for row
    {
        for (int j=0;j<n-i;j++)// for space 
        {
            cout<<" ";
        }
        for (int k=0;k<2*i-1;k++) //for print stars
        {
            cout<<"*";
        }
            cout<<endl;//for line break


    }
    return 0;
}