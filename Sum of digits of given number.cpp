#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int sum=0;
    while((N/10)>=0){
    sum=sum+(N%10);
    N=N/10;
    }
    cout << sum << endl;
    return 0;
}
