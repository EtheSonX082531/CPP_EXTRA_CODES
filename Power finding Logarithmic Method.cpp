#include<iostream>
using namespace std;
//logarithmic Method
int Power(int a,int b) {
    int x;
    if(b==1) {
        return a;
    }
    else if(b==0) {
        return 1;
    }
    else if(b%2==0) {
        x=Power(a,b/2);
        return x*x;
    }
    else {
        return a*Power(a,b-1);
    }
}


int main()
{
    int a,b;
    cout << "Enter the number of base:" << endl;
    cin>>a;
    cout<<"Enter the number of power:"<<endl;
    cin>>b;
    cout<<"Answer is: "<<Power(a,b)<<endl;
    return 0;
}
