#include<iostream>
using namespace std;

int binomialf(int no){
    int fact=1;
    for(int i=1;i<=no;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n,int r){
    int fact_n=binomialf(n);
    int fact_r=binomialf(r);
    int fact_nmr=binomialf(n-r);
    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n=8,r=2;
    cout<<ncr(n,r);
    return 0;
}
