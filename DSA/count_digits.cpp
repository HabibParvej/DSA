#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number to check:";
    cin>>n;
     // Handle the case for 0 separately
    if (n == 0) {
        cout << 1; // 0 has 1 digit
    } else {
        int count = (int)(log10(abs(n))) + 1; // Count digits for non-zero numbers
        cout << count; // Output the number of digits
    }
    

}