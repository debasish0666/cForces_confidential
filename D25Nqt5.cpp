#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , r;
    cin>>n>>r;
    int sum=0;
    int temp;
    
    for(int i=0;i<r;i++){
        int temp=n;
        while(temp>0){
            int digit=temp%10;
            temp/=10;
            sum = sum+digit;
        }
    }
    int PossibleWays=0;
    while(sum >0){
        int fdigit=sum%10;
        sum/=10;
        PossibleWays=PossibleWays+fdigit;
    }
    cout<<PossibleWays<<endl;
}