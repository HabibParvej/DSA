#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

stack<int>st;
st.push(1);
st.push(4);
st.push(3);
st.push(4);
st.push(5);

cout<<st.size()<<endl;
cout<<st.top();
//Not displaying
st.pop();
return 0;
}