#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if(x!=1 && x!=0) {
        int q=sqrt(x);
        for(int i=2; i<=q; i++) {
            if(x%i==0) {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}


int main()
{
    int start,end;
    cout << "Enter the starting and ending limits:" << endl;
    cin>>start>>end;
    for(int i=start; i<=end; i++) {
        if(isPrime(i)) {
            cout<<i<<" ";
        }
    }
    return 0;
}
