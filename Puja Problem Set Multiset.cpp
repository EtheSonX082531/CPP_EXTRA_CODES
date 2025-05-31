/*Question:Ekta num loite input,ototin shongkha loibe.Output aibo 2 ta num,
Ekta oilo koyta unique num ase Eno r arekta oilo j number sbcheye Beshi bar ase otar,mane kotobar ase*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_count=0;
    set<int>s;
    multiset<int>ms;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        ms.insert(x);
        if((ms.count(x))>max_count) {
            max_count=ms.count(x);
        }
        s.insert(x);
    }
    cout<<"Total unique number: "<<s.size()<<endl;
    cout<<"Max occurrences: "<<max_count<<endl;
    return 0;
}
