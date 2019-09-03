
/*
out put of the code will be this type of pattern
        *
       ***
      *****
     *******

*/


#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i=1;i<n;i++)//for row
    {
        for (int j=1;j<n-i;j++)// for space 
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