#include<iostream>
using namespace std;
int sum=0;
void sum_of_digits(int no){
    int digit=0;
    while(no>0){
        int lastdigit=no%10;
        no=no/10;
        sum += lastdigit;
    }
    cout<<sum;
}
int main(){
    sum_of_digits(123);
    return 0;
}