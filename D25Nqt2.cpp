#include<bits/stdc++.h>
using namespace std;
int main(){
    int count0=0;

    int count1=0;

    int count2=0;

    int items;
    
    cin>>items;
    int n;
    int i=1;
    vector<int>riskSev;
    while(i<=items){
        cin>>n;
        riskSev.push_back(n);
        i++;
    }
    for(int j=0;j<items;j++){
        if(riskSev[j]==1){
            count1++;
        }
        else if(riskSev[j]==0){
            count0++;
        }
        else if(riskSev[j]==2){
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        cout<<"0 ";
    }
    for(int i=0;i<count1;i++){
        cout<<"1 ";
    }
    for(int i=0;i<count2;i++){
        cout<<"2 ";
    }
}