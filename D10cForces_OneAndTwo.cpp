#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);

        int total_twos=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2){
                total_twos++;
            }
        }
        if(total_twos%2!=0){
            cout<<-1<<endl;
            continue;
        }
        int need = total_twos/2;
        int count =0;

        for(int i=0;i<n;i++){
            if(a[i]==2){
                count++;
                if(count==need){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        //special case when there are no 2s at all, we can choose any index, so we choose the first one
        if(total_twos==0){
            cout<<1<<endl;
        }


    }
}       