#include<bits/stdc++.h>
using namespace std;
bool CheckPrime(int i)
{
    for(int j=2; j<=i/2; j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}

void PrimeFactor(int x)
{
    vector<int>v;
    for(int i=1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            int y=CheckPrime(i);
            if(y==1)
            {
                v.push_back(i);
            }
        }
    }

    for(int k:v)
    {
        cout<<k<<" ";
    }
}

int main()
{
    int x;
    cin>>x;
    PrimeFactor(x);
    return 0;
}
