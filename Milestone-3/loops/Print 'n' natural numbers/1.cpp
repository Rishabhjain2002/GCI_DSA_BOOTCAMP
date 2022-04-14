#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number till where you have to print n natural number"<<endl;
    cin>>n;
    cout<<"Print from 1 to "<<n<<endl;
    cout<<"Numbers are : "<<endl;
    i=1;
    while(i<=n)
    {
        cout<<i ;
         i++;
    }

    return 0;
}
