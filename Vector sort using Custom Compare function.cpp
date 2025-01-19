#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b) {
    return a>b;
}

int main()
{
    vector<int>v= {8,5,2,6,7,1,0,3,9,2};
    sort(v.begin(),v.end());
    for(auto i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),compare);
    for(auto i:v) {
        cout<<i<<" ";
    }
    return 0;
}
