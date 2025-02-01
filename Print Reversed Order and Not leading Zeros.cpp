#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    string s1,s2;
    s1=to_string(n);
    bool flag=false;
    for(int i=(s1.length()-1); i>=0; i--) {
        if(flag==false) {
            if(s1[i]!='0') {
                flag = true;
                s2=s2+s1[i];
            }
        }
        else {
            s2=s2+s1[i];
        }
    }
    cout<<"Printing the number in reversed order and not leading Zeros:"<<endl;
    cout<<s2<<endl;
    return 0;
}
