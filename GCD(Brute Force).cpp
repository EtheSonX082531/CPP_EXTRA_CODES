#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Enter two number here:" << endl;
    cin>>n1>>n2;
    if(n1==0 || n2==0) {
        cout << "Gcd is: " <<max(n1,n2)<< endl;
        return 0;
    }
    for(int i=min(n1,n2); i>=1; i--) {
        if(n1%i==0 && n2%i==0) {
            cout << "Gcd is: " <<i<< endl;
            return 0;
        }
    }
    return 0;
}
