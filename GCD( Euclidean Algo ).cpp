#include<iostream>
using namespace std;

int GCD(int a,int b) {
    int x=0;
    while(b%a!=0) {
        x=a;
        a=b%a;
        b=x;
    }
    return a;
}


int main()
{
    int a,b;
    cout << "Enter two number:" << endl;
    cin>>a>>b;
    if(a>b) {
        swap(a,b);
    }
    cout << "GCD is:" << endl;
    cout<<GCD(a,b);
    return 0;
}
