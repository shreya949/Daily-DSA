#include<iostream>
using namespace std;
int nFactorial(int n) {
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
	}
    return fact;
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int result=nFactorial(n);
    cout<<result;
}