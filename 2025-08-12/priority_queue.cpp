#include<iostream>
#include <queue>
using namespace std;
void explainqueue() {
    priority_queue<int> pq;
    // Max-heap by default
    // stores maximum at top
    pq.push(100);
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<<pq.top();

    pq.pop();
    cout<<pq.top();

    //minimum priority queue
    // stores minimum at top
    priority_queue<int ,vector<int>,greater<int>> q;
    q.push(30);
    q.push(20);
    cout<<q.top();
}
int main(){
    explainqueue();
    return 0;
}