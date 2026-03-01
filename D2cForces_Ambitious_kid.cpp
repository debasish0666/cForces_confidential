#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int min_abs =INT_MAX;
    bool hasZero = false;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x==0) hasZero = true;
        min_abs = min(min_abs, abs(x));
    }
    if(hasZero) cout<<0<<endl;
    else cout<<min_abs<<endl;

    return 0;
}