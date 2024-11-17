#include<iostream>
using namespace std;
void fun(int n)
{   
    if(n<1) return;
    cout<<n<<endl;
    fun(n-1);
    
}
int main()
{
    int n;
    cout<<"Enter how many times you want to print:";
    cin>>n;
   fun(n);

 return 0;
}