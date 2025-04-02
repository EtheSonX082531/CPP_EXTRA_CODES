#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);

// Function to check if a character is alphanumeric (letter or number)
bool isAlphaNum(char ch) {
    if( (tolower(ch)>='a' && tolower(ch)<='z') || (ch>='0' && ch<='9') ) {
        return true;
    }
    else {
        return false;
    }
}


// Function to check if string is a valid palindrome
bool checkValidPalindrome(string s) {
    int i=0;
    int j=s.length()-1;
    while(i<=j) {
    // Skip non-alphanumeric characters from left
        if(!isAlphaNum(s[i])) {
            i++;
            continue;
        }
        
    // Skip non-alphanumeric characters from right
        else if(!isAlphaNum(s[j])) {
            j--;
            continue;
        }
        
    // Compare characters (case-insensitive)
        else if(tolower(s[i])!=tolower(s[j])) {
            return false;
        }
        i++;  // Move left pointer right
        j--;  // Move right pointer left
    }
    return true;
}



int main()
{
    fastIO();
    string s;
    cout << "Enter a String here:" << endl;
    getline(cin,s);
    (checkValidPalindrome(s))?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
    return 0;
}
