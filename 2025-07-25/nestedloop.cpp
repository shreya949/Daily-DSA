#include<iostream>
using namespace std;
int main(){
    //pattern
    // *****
    // *****
    // *****
    // *****
    // *****
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //sum of all numbers while are divisible by three
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum += i;
        }
    }
    cout<<sum<<endl;

    //print factorial of number n
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    cout<<"Factorial is="<<fact;

    

    return 0;
}