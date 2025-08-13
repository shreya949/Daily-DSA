#include<iostream>
#include <deque>
using namespace std;
void explaindeque(){
    deque<int> deque={10,2,0};
    deque.push_back(2);
    
    deque.push_front(5);
    
    for(auto it=deque.begin();it!=deque.end();it++){        // print values of v now
            cout<<*(it)<<" ";
        }
}
int main(){
    
    explaindeque();
    return 0;
}