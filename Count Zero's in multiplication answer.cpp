#include<iostream>
using namespace std;

int main()
{
    int n,x,m=1,i=0;
    cout << "Enter test case:" << endl;
    cin>>n;
    cout << "Enter input numbers:" << endl;
    for(int i=0; i<n; i++) {
        cin>>x;
        m=m*x;
    }
    n=0;
    string s=to_string(m);
    while(s[i]!='\0') {
        if(s[i]=='0') {
            n++;
        }
        i++;
    }
    cout << "Number of Zeros in multiplication answer:" <<n<< endl;
    return 0;
}
