#include<iostream>
using namespace std;

void solve(int n,int &sum) {

sum=sum+n;
if(n==1) 
return;
solve(n-1,sum);


}

int main(){
     int n,sum=0;
     cout<<"Enter the value of N:";
     cin>>n;
   solve(n,sum);
 cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
return 0;
}