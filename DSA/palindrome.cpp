#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,dig; 
    cout<<"Enter any number to check:";
    cin>>n;
    int r=n;
     while(n>0)
     {
      dig=n%10;
      sum=sum*10+dig;
      n=n/10;  
     }
     
      if (sum > INT_MAX || sum < INT_MIN) {
                return sum;    
            }
        if(r==sum) cout<<"palindrome";
         else cout<<"not palindrome";
    
return 0;
}   
