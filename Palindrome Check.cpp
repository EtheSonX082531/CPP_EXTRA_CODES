#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,x;
    cout << "Enter a string here:" << endl;
    getline(cin,s);
    x=s;
    reverse(s.begin(),s.end());
    if(s==x){
    cout << "Palindrome!" << endl;
    }
    else{
    cout << "Not Palindrome!" << endl;
    }
    return 0;
}
