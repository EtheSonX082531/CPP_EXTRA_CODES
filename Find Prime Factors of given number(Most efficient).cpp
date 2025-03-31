#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin>>n;
    list<int>l;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            l.push_back(i);
            while(n%i==0) {
                n=n/i;
            }
        }
    }
    if(n!=1) {
        l.push_back(n);
    }
    cout << "All Prime Factors:" << endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    return 0;
}
