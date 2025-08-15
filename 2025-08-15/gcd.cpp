#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    // Return gcd of a and b
    return result;
}
void gcd_way(int a, int b)
{
    // from front side check
    int gcd=0,mini=min(a,b);
    for(int i=1;i<=mini;i++){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
    }
    // from back side check
    // for(int i=mini;i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         cout<<i;
    //         break;
    //     }
    // }
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b);
    return 0;
}