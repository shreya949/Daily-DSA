#include<iostream>
using namespace std;
void nForest2(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    nForest2(n);
    return 0;
}