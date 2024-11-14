#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

deque<int>dq;
dq.push_back(1);
dq.push_back(4);
dq.push_back(3);
dq.push_back(4);
dq.push_back(15);

for(auto i:dq)
cout<< i <<" ";
    

return 0;
}