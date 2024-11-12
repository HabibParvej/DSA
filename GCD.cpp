#include<iostream>
using namespace std;
int main()
{
    int n1,n2,gcd;
cout<<"Enter 1st Number:";
cin>>n1;
cout<<"Enter 2nd Number:";
cin>>n2;
for (int i=1;i<=min(n1,n2);i++)
{
    if(n1%i==0 && n2%i==0)
       gcd=i;
       
}
cout<<"GCD is:"<<gcd<<endl;
return 0;
}   