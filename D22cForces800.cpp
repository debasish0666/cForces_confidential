#include<bits/stdc++.h>
using namespace std;

int pat1(vector<int>&nums){
    int Larindex=0;
    int largest = nums[0];
    int secondLargest = -1;
    for (int i =0;i< nums.size();i++){
        if(nums[i]>largest){
            secondLargest = largest;
            largest = nums[i];
            Larindex=i;
        }
        else if(nums[i]>secondLargest && nums[i]!=largest){
            secondLargest = nums[i];
        }
        

    }
    if(secondLargest*2<=largest){
        return Larindex;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int> nums = {3,6,1,0};
    cout<<pat1(nums);



}