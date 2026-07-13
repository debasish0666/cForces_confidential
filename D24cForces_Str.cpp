#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(char c : s){
        mp[c]++;
    }
    if(mp['*']==mp['#']){
        cout<<0<<endl;
    }
    else if(mp['*']>mp['#']){
        cout<<mp['*']-mp['#']<<endl;
    }
    else{
        cout<<mp['*']-mp['#']<<endl;
    }

    return 0;
        
}
