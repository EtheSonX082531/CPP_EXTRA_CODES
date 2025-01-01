#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    cout<<"Enter two number and operation:"<<endl;
    cin>>a>>b>>ch;
    switch (ch) {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '/':
        if(b==0) {
            cout<<"Infinity"<<endl;
        }
        else {
            cout<<a/b<<endl;
        }
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    default:
        cout<<"Invalid operation"<<endl;
    }
    return 0;
}
