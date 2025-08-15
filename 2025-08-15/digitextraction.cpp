#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void digitextraction(int n){
    while(n>0){
        int lastdigit =n%10;
        n=n/10;
        cout<<lastdigit<<endl;
    }
}
void count(int n){
    int count=(int) (log10(n)+1);
    cout<<count;
}
int main(){
    digitextraction(10234);
    count(223144);
    return 0;
}