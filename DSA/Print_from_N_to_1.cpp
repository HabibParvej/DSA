#include<iostream>
using namespace std;
void fun(int i,int n)
{   
    if(i==n) return;
    cout<<n<<endl;
    
    fun(i,n-1);
}
int main()
{
    int n ,i=0;
    cout<<"Enter how many times you want to print:";
    cin>>n;
   fun(i,n);

 return 0;
}