#include<iostream>
using namespace std;

int gcd(int a,int b) {
    if(a!=0 && b!=0) {
        if(a>b) {
            swap(a,b);
        }
        while(b!=0) {
            int x=a;
            a=b%a;
            b=x;
        }
        return a;
    }
    else {
        return max(a,b);
    }
}

int main()
{
    int a,b,c;
    cout << "Enter 3 number:" << endl;
    cin>>a>>b>>c;
    cout<<"GCD of these 3 numbers: "<<gcd(gcd(a,b),c)<<endl;
    return 0;
} 
