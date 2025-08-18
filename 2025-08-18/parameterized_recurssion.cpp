#include<iostream>
using namespace std;
// int sum;
// void f(int n){
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
// }
void f_way(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f_way(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    // f(n);
    f_way(n,0);
    return 0;
}