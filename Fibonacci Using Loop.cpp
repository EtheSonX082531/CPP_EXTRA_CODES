#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Fibonacci Sequence:"<<endl;
    cin>>n;
    int a=0,b=1;
    int sum;
    cout<<"Fibonacci Sequence:"<<endl;
    for(int i=1; i<=n; i++) {
        sum=a;
        cout<<sum<<endl;
        a=a+b;
        b=sum;
    }
    return 0;
}
