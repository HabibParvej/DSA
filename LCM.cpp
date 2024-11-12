#include<iostream>
using namespace std;
int main()
{
    int a,b,gcd,lcm;
cout<<"Enter 1st Number:";
cin>>a;
cout<<"Enter 2nd Number:";
cin>> b;
int A=a;
int B=b;
while(a>0 && b>0){
        if(a>b)
         a=a%b;
        else 
         b=b%a;
    }
    if(a==0) 
     gcd=b;
    else
     gcd=a;
    lcm=(A*B)/gcd;
cout<<"GCD is:"<<gcd<<endl;
cout<<"LCM is:"<<lcm;
return 0;
}   