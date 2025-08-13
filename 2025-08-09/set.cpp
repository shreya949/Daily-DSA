#include<iostream>
#include <set>
using namespace std;
void explainset() {
    set<int> st;
    // stores in sorted and duplicates are not allowed
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.emplace(4);
    // {1,2,3,4,5}
    auto it=st.find(3);
    // points tothe address of element 3

    auto it=st.find(6);
    // if not found then it takes address of st.end()
    
    st.erase(5);
    // eraser 5 in set

    int count=st.count(1);
    cout<<count;
    //print occurances of 1

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);
    //will erase between 2 and 3

    auto it =st.lower_bound(2);
    auto it =st.upper_bound(5);
}
int main(){
    explainset();
    return 0;
}