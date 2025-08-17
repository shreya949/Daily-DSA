#include<iostream>
using namespace std;
void reverse(int n){
    if(n<=0){
        return;
    }
    cout<<n<<endl;
    reverse(n-1);
}
void reverse_way(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    reverse_way(i-1,n);
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    reverse_way(n,n);
    return 0;
}