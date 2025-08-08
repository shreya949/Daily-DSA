#include<iostream>
#include <stack>
using namespace std;
void explainstack(){
    stack<int> stack1;
    
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);

    cout<<stack1.top();
    stack1.pop();
    cout<<stack1.top();

    cout<<stack1.size();
    cout<<stack1.empty();

    stack<int> stack2;
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    stack2.push(4);
    stack2.push(5);

    stack1.swap(stack2);


}
int main(){
    
    explainstack();
    return 0;
}