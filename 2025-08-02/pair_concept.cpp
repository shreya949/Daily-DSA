#include<iostream>
using namespace std;
void pairexplain(){
    pair<int, int> p={10,20};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> q={10,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int, int> arr[]={{1,2},{2,3}};
    cout<<arr[0].first<<" "<<arr[0].second<<" "<<arr[1].first<<" "<<arr[1].second<<endl;
}
int main(){
    pairexplain();
    return 0;
}