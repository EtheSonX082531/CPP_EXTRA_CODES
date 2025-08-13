#include<bits/stdc++.h>
using namespace std;

void MEAN() {
    int x;
    float sum=0;
    cout<<"Enter Raw Data Number: ";
    cin>>x;
    vector<int>rawData(x);
    cout << "Enter All Data Here: ";
    for(int i=0; i<x; i++) {
        cin>>rawData[i];
        sum=sum+rawData[i];
    }
    float mean=sum/x;
    cout << "----Mean Is: " << mean << endl;
    cout<<endl;
}


void MODE() {
    int x;
    cout<<"Enter Raw Data Number: ";
    cin>>x;
    vector<int>rawData(x);
    cout << "Enter All Data Here: ";
    for(int i=0; i<x; i++) {
        cin>>rawData[i];
    }
    int maxCount=0;
    int modeEl=0;
    for(int i=0; i<x; i++) {
        int freq=count(rawData.begin(),rawData.end(),rawData[i]);
        if(freq>maxCount) {
            maxCount=freq;
            modeEl=rawData[i];
        }
    }
    cout<<"----Mode Is: "<<modeEl<<endl;
    cout<<"----Frequency: "<<maxCount<<endl;
    cout<<endl;
}


void MEDIAN() {
    int x;
    cout<<"Enter Raw Data Number: ";
    cin>>x;
    vector<int>rawData(x);
    cout << "Enter All Data Here: ";
    for(int i=0; i<x; i++) {
        cin>>rawData[i];
    }
    sort(rawData.begin(),rawData.end());
    if(x%2!=0) {
        cout<<"----Median Is: "<<rawData[x/2]<<endl;
    }
    else {
        float median=(rawData[x/2]+rawData[(x/2)-1])/(float)2;
        cout<<"----Median Is: "<<median<<endl;
    }
    cout<<endl;
}


void EXIT() {
    cout<<"-----------------------------"<<endl;
    cout<<">>>>>>>>> THANK YOU <<<<<<<<<"<<endl;
    cout<<"-----------------------------"<<endl;
}

int main()
{
    int x=1;
    while(x) {
        cout<<"1.Tap 1 for MEAN-->"<<endl;
        cout<<"2.Tap 2 for MODE-->"<<endl;
        cout<<"3.Tap 3 for MEDIAN-->"<<endl;
        cout<<"0.Tap 0 for EXIT-->"<<endl;
        cout<<"Enter a value: ";
        cin>>x;
        cout<<endl;
        if(x==1) {
            MEAN();
        }
        else if(x==2) {
            MODE();
        }
        else if(x==3) {
            MEDIAN();
        }
        else if(x==0) {
            EXIT();
        }
        else {
            cout<<"INVALID OPERATION!"<<endl;
        }
    }
    return 0;
}
