#include<iostream>
using namespace std;
int main(){
int i,j;
float x,y,z;
cout<<"Enter The salary : "<<endl;
cin>>i;
cout<<"Enter the no. of years employee work"<<endl;
cin>>j;
if(j>5)
{
    cout<<"Bonus of 5 % is given : "<<endl;
    x=.05;
    y=x*i;
    i=i+y;
    cout<<"Salary after 5 % Bonus : "<<i;
}
else{
    cout<<"No Bonus ";
}

return 0;
}
