#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;
    while(t--){
        long long n;
        cin>> n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        long long total_XOR = 0;
        for(int i=0; i<n; i++){
            total_XOR ^= a[i];
        }
        if (n% 2 == 1){
            cout<< total_XOR << endl;
        }
        else{
            if(total_XOR == 0){
                cout<< total_XOR << endl;
            }
            else{
                cout<< -1 << endl;
            }
        }
            


    }
    return 0;
}