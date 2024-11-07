#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1534236469;
    long int sum=0,dig;
    cout<<"Enter any number to check:";
    n=abs(n);
     while(n>0)
     {
      dig=n%10;
      sum=sum*10+dig;
      n=n/10;  
     }
      if (sum > INT_MAX || sum < INT_MIN) {
                cout<<"zero";
                
            }
     cout<<"reverse number is :"<<static_cast<int>(sum);
    

}   