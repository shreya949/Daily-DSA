#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int divisors(int no)
{
    for(int i=1;i<=no;i++){
        if(no%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
int divisors_way(int no)
{
    vector<int> ls;
    for(int i=1;i*i<=no;i++){       //i<=sqrt(no)
        if(no%i==0){
            ls.push_back(i);
            if((no/i)!=i){
                ls.push_back(no/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<<" ";
    return 0;
}
int main()
{
    int no;
    cin>>no;
    divisors(no);
    return 0;
}