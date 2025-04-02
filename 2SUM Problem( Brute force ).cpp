#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fastIO();
    int n,sum;
    cout << "Enter the size of Array:" << endl;
    cin>>n;
    vector<int>v(n);
    cout << "Enter all elements of the array:" << endl;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cout << "Enter the 2 sum value:" << endl;
    cin>>sum;
    for(int i=0; i<n; i++) {
        int j=0;
        while(j<n && j!=i) {
            if(v[i]+v[j]==sum) {
                cout<<"2SUM elements found!"<<endl;
                cout<<"indices: "<<"( "<<i<<","<<j<<" )"<<endl;
                return 0;
            }
            j++;
        }
    }
    cout << "2SUM elements not found!" << endl;
    return 0;
}
