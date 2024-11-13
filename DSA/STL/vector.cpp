#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v;
v.push_back(12);
v.emplace_back(5);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(6);
v.push_back(7);
v.push_back(9);
//print single element
//cout<<v.front();
// print all elements upto end
// for (auto it =v.begin();it!=v.end();it++)
// cout<<*it<<" ";
   //or
// for(vector<int>::iterator i=v.begin();i!=v.end();i++)
// cout<<*i<<" ";
// // output:12 5 3 4 5 6 6 7 9 

//for each loop
for(auto it:v)
cout<<it<<" ";
// output:12 5 3 4 5 6 6 7 9 

return 0;
}