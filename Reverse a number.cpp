#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sign;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    (n>0)?sign=1:sign=-1;
    n=abs(n);
    int r=0;
    while(n!=0) {
        int x=n%10;
        r=r*10+x;
        n=n/10;
    }
    cout << "After reversing the number:" << endl;
    cout<<r*sign<<endl;
    return 0;
}
