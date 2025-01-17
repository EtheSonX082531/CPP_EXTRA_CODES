#include<iostream>
using namespace std;

int gcd(int a,int b) {
    if(b>a) {
        swap(a,b);
    }
    int x=1;
    while(x) {
        x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b)<<endl;
    return 0;
}
