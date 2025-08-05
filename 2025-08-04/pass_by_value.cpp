#include<iostream>
using namespace std;
int sum1(int a,int b){
    a=a+10;
    b=b+20;
    return a+b;
}
int main(){
    int sum=sum1(10,20);
    cout<<sum;
    return 0;
}