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
    cout << "Enter the sum value:" << endl;
    cin>>sum;
    int start=0,end=n-1;
    while(start<end) {
        if(v[start]+v[end]==sum) {
            cout<<"2SUM elements are found!"<<endl;
            cout<<"Indices: "<<start+1<<","<<end+1<<endl;
            return 0;
        }
        else if(v[start]+v[end]<sum) {
            start++;
        }
        else {
            end--;
        }
    }
    cout << "2SUM elements are not found!" << endl;
    return 0;
}
