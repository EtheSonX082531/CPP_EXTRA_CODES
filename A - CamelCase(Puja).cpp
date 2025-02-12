#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=1;
    for(int i=0; i<s.length(); i++) {
        if(s[i]>='A' && s[i]<='Z') {
            count+=1;
        }
    }
    cout<<count;
    return 0;
}
//https://vjudge.net/contest/692000#problem/A
