#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the quantity of product purchased"<<endl;
    cin>>i;
    if(i*100>1000){
        cout<<"10% Discount on every item ";
    }
    else {
        cout<<"No Discount ";
    }
    return 0;
}
