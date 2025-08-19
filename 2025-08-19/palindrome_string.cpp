#include <iostream>
#include <utility> // For std::swap
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool swapping(int i, string &n) {
    if(i>=n.size()/2) return true;
    if(n[i] != n[n.size()-i-1]) return false;
    return swapping(i+1,n);
    
}

int main() {
    string n;
    cin >> n;
    cout<<swapping(0, n);
    return 0;
}
 