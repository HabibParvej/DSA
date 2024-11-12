#include<iostream>
using namespace std;
int count=0;
void print(){
    if(count == 3) return;
    cout<<count<<endl;
    count+=1;
    print();
}
int main()
{
   print();

 return 0;
}