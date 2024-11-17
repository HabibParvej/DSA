#include<iostream>
using namespace std;
void fun(int i,int n)
{   
    if(i<1) return;
    
    fun(i-1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter how many times you want to print:";
    cin>>n;
   fun(n,n);

 return 0;
}