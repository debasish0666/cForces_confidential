#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int n;
    cin>>size;
    vector<int>vec;
    while(size--){
        cin>>n;
        vec.push_back(n);
    }
    int max_sum_subarray=INT_MIN;
    int sum=0;
    for(int i =0;i<vec.size();i++){
        sum=sum+vec[i];
        max_sum_subarray = max(sum,max_sum_subarray);
        if(sum<0){
            sum=0;
        }
    
    }
    cout<<"Maximum_Sum : "<< max_sum_subarray;
    return 0;

}