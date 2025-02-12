#include<iostream>
using namespace std;

int main()
{
    int n,count1=1,count2=0,x;
    cin>>n;
    string s[n];
    cin>>s[0];
    for(int i=1; i<n; i++) {
        cin>>s[i];
        if(s[i]==s[0]) {
            count1+=1;
        }
        else {
            count2+=1;
            x=i;
        }
    }
    if(count1>count2) {
        cout<<s[0];
    }
    else {
        cout<<s[x];
    }
    return 0;
}
//https://vjudge.net/contest/692000#problem/E
