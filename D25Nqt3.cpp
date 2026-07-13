#include<bits/stdc++.h>
using namespace std;
int main(){
    int shift;
    cin>>shift;
    if(shift<0){
        cout<<"INVALID INPUT"<<endl;
    }
    if (shift>=26){
        shift%=26;
    }
    string s;
    string ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            ans+=char(s[i] -'a' + shift)%26 + 'a';
        }
        else if(isupper(s[i])){
            ans+=char(s[i] -'A' + shift)%26 + 'A';
        }
        else if(isdigit(s[i])){
            ans += char((s[i]-'0'+shift)%10)+'0';
        }
        else if (s[i]==' '){
            ans+=s[i];
        }
        else{
            ans+=s[i];
        }

    }
    cout<<ans<<endl;
}