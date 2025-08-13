#include<iostream>
#include <queue>
using namespace std;
void explainqueue(){
    queue<int> q;
    q.push(1);
    q.back() += 5;
    cout<<q.back();
    cout<<q.front();
    q.pop();
    
}
int main(){
    
    explainqueue();
    return 0;
}