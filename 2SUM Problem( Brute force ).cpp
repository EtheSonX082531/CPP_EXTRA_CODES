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
    for(int i=0; i<n-1; i++) {
        int j=i+1;
        while(j<n) {
            if(v[i]+v[j]==sum) {
                cout<<"2SUM elements are found!"<<endl;
                cout<<"indices: "<<"( "<<(i+1)<<","<<(j+1)<<" )"<<endl;
                return 0;
            }
            j++;
        }
    }
    cout << "2SUM elements are not found!" << endl;
    return 0;
}
