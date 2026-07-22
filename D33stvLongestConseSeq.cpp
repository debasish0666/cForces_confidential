#include<bits/stdc++.h>
using namespace std;
int main(){
    int MaxCount=0;
    int count =0;
    sort(arr.begin(),arr.end());
    for(int i =1;i< arr.size();i++){
        if((arr[i]!= arr[i-1]+1) && (arr[i]!=arr[i-1]) ){
            count =0 ;

        }
        else if(arr[i]== arr[i-1]+1 ){

            count++; 
        }
        MaxCount = max(MaxCount,count+1);
    }
    cout<<MaxCount;
}