#include<iostream>
using namespace std;
int main() {
    //sum of odd numbers
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"Total sum="<<sum;

    //number is prime or not
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"\nNot a prime number";
            break;
        }
    }
    return 0;
}       