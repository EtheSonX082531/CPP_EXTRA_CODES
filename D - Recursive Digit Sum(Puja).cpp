#include<iostream>
using namespace std;

int superDigit(string p) {
    if(p.length()==1) {
     return p[0]-'0';
    }
    else {
        int temp=0;
        for(int i=0; i<p.length(); i++) {
            temp=temp+(p[i]-48);
        }
        p=to_string(temp);
        return superDigit(p);
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    string p;
    for(int i=0; i<k; i++) {
        p=p+to_string(n);
    }
    cout<<superDigit(p);
    return 0;
}
