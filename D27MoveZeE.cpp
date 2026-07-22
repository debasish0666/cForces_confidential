#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int ele;
    vector<int>vec;
    cin>>size;
    while(size>0){
        cin>>ele;
        vec.push_back(ele);
        size--;
    }
    int j=0;
    int k=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==0){
            j=i;
            k=i;
            break;
        }
    }
    
    while(j<vec.size()){
        if(vec[j]!=0){
            swap(vec[j],vec[k]);
            k++;            
        }
        j++;
    }
    cout << "NEW_VEC: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;


}