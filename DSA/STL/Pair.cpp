#include<iostream>
using namespace std;
int main(){
//Example
pair<int,int>p={1,3};
cout<<p.first<<" "<<p.second<<endl;
//nested pair
pair<int,pair<int,int>>p2={2,{5,6}};
cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;
return 0;
}