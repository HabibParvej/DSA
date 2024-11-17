#include<iostream>
using namespace std;

void solve(int n,int &sum) {

sum=sum*n;
if(n==1) 
return;
solve(n-1,sum);


}

int main(){
     int n,sum=1;
     cout<<"Enter the value of N:";
     cin>>n;
   solve(n,sum);
 cout<<"Factorial of "<<n<<" is: "<<sum;
return 0;
}