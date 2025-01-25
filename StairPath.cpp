#include<iostream>
using namespace std;

int StairPath(int n) {
    if(n==1 || n==2 || n==3) {
        return n;
    }
    return StairPath(n-1)+StairPath(n-2)+StairPath(n-3);
}

int main()
{
    int n;
    cout<<"Enter the number of stairs:"<<endl;
    cin>>n;
    cout<<"Number of ways for taking (1 or 2 or 3) steps:"<<endl;
    cout<<StairPath(n)<<endl;
    return 0;
}
