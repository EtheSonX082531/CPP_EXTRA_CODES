#include<bits/stdc++.h>
using namespace std;

int main()
{
    int trigger=0;
    vector<int>v= {83,111,114,114,121,32,78,105,108,97,32,32};
    for(int i=0; i<=1000; i++) {
        if(trigger) {
            for(auto it=v.begin(); it!=v.end(); it++) {
                cout<<(char)(*it);
                if(next(it)==v.end()) {
                    cout<<"💕";
                }
            }
            trigger=0;
        }
        else {
            for(auto it=v.begin(); it!=v.end(); it++) {
                cout<<(char)(*it);
                if(next(it)==v.end()) {
                    cout<<"🌿";
                }
            }
            trigger=1;
        }
    }
    return 0;
}
