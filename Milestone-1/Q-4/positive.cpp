#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check"<<endl;
    cin>>a;
    if(a>0){
        cout<<"Given number is positive";
    }
    else if(a<0){
        cout<<"Given number is negative";
    }
    else if(a==0){
        cout<<"Given number is zero";
    }
    return 0;
}
