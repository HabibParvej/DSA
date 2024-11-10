#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,s=0,count=0;
    cout<<"Enter any number to check:";
    cin>>n;
    int r=n;
    int temp=n;
    while(temp>0)
     {
      int dig=temp%10;
      count++;
      temp=temp/10;  
     }

     while(n>0)
     {
      int dig=n%10;
      s=s+ pow(dig,count);
      n=n/10;  
     }
    if(r==s)
     cout<<"Armstrong number";
    else
     cout<<"Not an Armstrong number";
return 0;
}   