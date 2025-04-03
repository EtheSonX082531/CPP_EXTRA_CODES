#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);


int main()
{
    fastIO();
    int n,sum,count=0;
    cout << "Enter the size of the array:" << endl;
    cin>>n;
    vector<int>v(n);
    cout << "Enter the array elements:" << endl;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cout << "Enter the Sub_array sum value:" << endl;
    cin>>sum;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int temp_sum=0;
            for(int k=i; k<=j; k++) {
                temp_sum=temp_sum+v[k];
            }
            if(temp_sum==sum) {
                count++;
            }
        }
    }
    cout << "Number of Sub_array sum for the given sum:" << endl;
    cout << count << endl;
    return 0;
}
