#include <iostream>
using namespace std;
//space complixity O(n)
int prime(int no)
{
    int count=0;
    for(int i=1;i<=no;i++){
        if(no%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Number";
    }
    return 0;
}
// space complixity  time complixity O(sqrt(n))
int prime_way(int no)
{
    int coun=0;
    for(int i=1;i*i<=no;i++){       //i<=sqrt(no)
        if(no%i==0){
            coun++;
            if((no/i)!=i){
                coun++;
            }
        }
    }
    if(coun==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Number";
    }
    return 0;
}
int main()
{
    int no;
    cin>>no;
    prime(13);
    return 0;
}