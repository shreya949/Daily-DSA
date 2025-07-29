#include<iostream>
using namespace std;
void nForest2(int n) {
    int num=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<num<<" ";
            num +=1;
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

// Enter the number of rows: 3
// 1 2 3 
// 4 5 6
// 7 8 9