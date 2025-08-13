#include<iostream>
#include <set>
using namespace std;
void explainmultiset() {
    multiset<int> st;
    // stores in sorted and duplicates are allowed
    st.insert(1);
    st.insert(2);
    st.insert(2);
    
    st.erase(2);
    // eraser 2 in set all the occurances

    int count=st.count(1);
    cout<<count;
    //print occurances of 1

    st.erase(st.find(2));
    //will erase 2 on that perticular address

    st.erase(st.find(1), st.find(4) );
    //will erase from1 and to 4 on that perticular address
}
int main(){
    explainmultiset();
    return 0;
}