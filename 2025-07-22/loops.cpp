#include<iostream>
using namespace std;
int main(){
    
    int i=1;
    for(i;i<=10;i++){
        cout<<"Strinver"<<i<<endl;
    }

    int i=1;
    while(i<=5){
        cout<<"Strinver"<<i<<endl;
        i++;
    }

    int i=1;
    do{
        cout<<"Strinver"<<i<<endl;
        i++;
    }while(i<=5);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i;
    }

    //question 
    return 0;
}