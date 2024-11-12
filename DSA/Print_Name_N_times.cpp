#include<iostream>
using namespace std;
void fun(int i,int n)
{
    if(i>n) return;
    cout<<"Habib"<<endl;
    fun(i+1,n);
}
int main()
{
    int n,i=1;
    cout<<"Enter how many times you want to print:"<<endl;
    cin>>n;
   fun(i,n);

 return 0;
}