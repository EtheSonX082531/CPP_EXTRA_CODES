#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cout << "Enter a number:" << endl;
    cin>>n;
    x=n;
    list<int>l;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            while(n%i==0) {
                l.push_back(i);
                n=n/i;
            }
        }
    }
    if(n!=1) {
        l.push_back(n);
    }
    // with design printing
    cout << "Prime Factorization:" <<endl;
    for(auto i=l.begin(); i!=l.end(); i++) {
        cout<<(*i);
        if(next(i)!=l.end()) {
            cout<<"×";
        }
    }
    cout<<"="<<x<<endl;
    return 0;
}
