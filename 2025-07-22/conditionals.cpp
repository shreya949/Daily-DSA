#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>18){
        cout<<"adult";
    }
    else{
        cout<<"not adult";
    }

    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }else if(marks<=44){
        cout<<"E";
    }else if(marks<=49){
        cout<<"D";
    }else if(marks<=59){
        cout<<"C";
    }else if(marks<=79){
        cout<<"B";
    }else if(marks<=100){
        cout<<"A";
    }

    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job";
        if(age>=55){
            cout<<", retirement soon";
        }  
    }

    int day;
    cin>>day;
    switch(day){
        case 1: cout<<"Monday";
                break;
        case 2: cout<<"Tuesday";
                break;
        case 3: cout<<"Wednesday";
                break;
        case 4: cout<<"THursday";
                break;
        case 5: cout<<"Friday";
                break;
        case 6: cout<<"saturday";
                break;
        case 7: cout<<"Sunday";
                break;
        default:cout<<"Invalid!";
    }

    int n=45;
    cout<<(n>=0 ? "Positive" : "Negative") << endl;


    return 0;
}