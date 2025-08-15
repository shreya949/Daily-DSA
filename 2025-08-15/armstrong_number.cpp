#include <iostream>
using namespace std;

int armstrong(int no)
{
    int fno=no;
    int lastdigit=0,sum=0;
    while(no>0){
        lastdigit=no%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        no=no/10;
    }
    if(sum==fno){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}
int main()
{
    int no;
    cin>>no;
    armstrong(no);
    return 0;
}