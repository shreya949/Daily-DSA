#include<iostream>
using namespace std;
void linear(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    linear(i+1,n);
}
void linear_way(int i,int n){
    if(i<1){
        return;
    }
    linear_way(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    linear(1,n);
    linear_way(n,n);
    return 0;
}