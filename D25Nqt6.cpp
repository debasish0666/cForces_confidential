#include<bits/stdc++.h>
using namespace std;

int BetweenRange(vector<int>arr, int rangeS1, int rangeS2){
    sort(arr.begin(), arr.end());

    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=rangeS1 && arr[i]<=rangeS2){
            count++;
        }
    }
    return count;
}

int main(){
    int noRocks;
    int noOfRange;
    int range1;
    int range2;
    cin >> noRocks >> noOfRange;
    
    vector<int> arr;
    while(noRocks>0){
        int n;
        cin>>n;
        arr.push_back(n);
        noRocks--;
    }
    vector<pair<int, int>> ranges;
    for(int i = 0; i < noOfRange; i++){
        int l, r;
        cin >> l >> r;
        ranges.push_back({l, r});
    }
    for(int i = 0; i < ranges.size(); i++){
        cout << BetweenRange(arr, ranges[i].first, ranges[i].second) << endl;
    }
}