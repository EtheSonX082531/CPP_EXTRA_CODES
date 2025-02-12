#include<iostream>
using namespace std;

string caeserCipher(int n,string s,int k) {
    if(k>26) {
        k=k%26;
    }
    for(int i=0; i<s.length(); i++) {
        if(s[i]>='a' && s[i]<='z') {
            if(s[i]+k>122) {
                s[i]=(s[i]+k)-122+96;
            }
            else {
                s[i]=s[i]+k;
            }
        }
        else if(s[i]>='A' && s[i]<='Z') {
            if(s[i]+k>90) {
                s[i]=(s[i]+k)-90+64;
            }
            else {
                s[i]=s[i]+k;
            }
        }
    }
    return s;
}

int main()
{
    int n,k;
    string s;
    cin>>n>>s>>k;
    cout<<caeserCipher(n,s,k)<<endl;
    return 0;
}
//https://vjudge.net/contest/692000#problem/C
