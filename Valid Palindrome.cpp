#include<bits/stdc++.h>
using namespace std;

bool isAlpha(char s) {
    if((s>='0' && s<='9') || (tolower(s)>='a' && tolower(s)<='z')) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string s;
    bool flag=true;
    cout<<"Enter a string here:"<<endl;
    getline(cin,s);
    int i=0,j=s.length()-1;
    while(i<=j) {
        if(!isAlpha(s[i])) {
            i++;
            continue;
        }
        else if(!isAlpha(s[j])) {
            j--;
            continue;
        }
        else if(tolower(s[i])!=tolower(s[j])) {
            cout<<"Not Palindrome!"<<endl;
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) {
        cout << "Palindrome!" << endl;
    }
    return 0;
}
