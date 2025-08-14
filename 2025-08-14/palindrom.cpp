#include<iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
string palindrome(int x) {
    long long num = x;                 // store in long long
    int sign = (num < 0) ? -1 : 1;
    if (num < 0) num = -num;            // safe negation in long long

    long long rev = 0;
    while (num > 0) {
        int lastdigit = num % 10;
        num = num / 10;
        
        if (rev > INT_MAX / 10 || 
            (rev == INT_MAX / 10 && lastdigit > 7)) {
            return 0; // overflow case
        }
        
        rev = (rev * 10) + lastdigit;
    }
    if(rev==x) return "true";
    else return "false";
}
int main(){
    int no;
    cin>>no;
    cout<<palindrome(no);
    return 0;
}

