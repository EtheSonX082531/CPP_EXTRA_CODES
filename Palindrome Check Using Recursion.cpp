#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int i,int j) {
    if(i==j) {
        return true;
    }
    else if(s[i]!=s[j]) {
        return false;
    }
    else {
        checkPalindrome(s,i+1,j-1);
        return true;
    }
}
int main()
{
    string s;
    getline(cin,s);
    int j=s.length()-1;
    if(checkPalindrome(s,0,j)) {
        cout<<"Palindrome!"<<endl;
    }
    else {
        cout << "Not Palindrome!" << endl;
    }
    return 0;
}
