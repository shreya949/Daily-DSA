#include<iostream>
#include <list>
using namespace std;
void explainlist(){
    list<int> ls={10,2,0};
    ls.push_back(2);
    
    ls.push_front(5);
    
    for(auto it=ls.begin();it!=ls.end();it++){        // print values of v now
            cout<<*(it)<<" ";
        }
}
int main(){
    
    explainlist();
    return 0;
}