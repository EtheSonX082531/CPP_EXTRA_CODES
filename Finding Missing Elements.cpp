#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    vector<int>v(n,0);
    cout << "Enter elements:" << endl;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>x(v[n-1]+1,0);
    for(int i=0; i<n; i++) {
        x[v[i]]=1;
    }
    cout << "Showing missing elements:" << endl;
    for(int i=0; i<v[n-1]; i++) {
        if(x[i]==0) {
            cout<<i<<" ";
        }
    }
    return 0;
}
