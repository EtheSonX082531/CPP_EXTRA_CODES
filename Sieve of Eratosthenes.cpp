#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);

void sieve(int n) {
    vector<int>prime_box(n+1,1);
    for(int i=2; i<=n; i++) {
        if(prime_box[i]==1) {
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i) {
                prime_box[j]=0;
            }
        }
    }
}

int main()
{
    fastIO();
    int n;
    cout << "Enter last limit:" << endl;
    cin>>n;
    cout << "Primes in this range:" << endl;
    sieve(n);
    return 0;
}
