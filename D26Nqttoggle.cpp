#include<bits/stdc++.h>
#include<bitset>
using namespace std;
int main(){
    int n ;
    cin>>n
    
    string binary=" ";
    while(n>0) {
        binary =char((n%2)+'0')+ binary;
        n/=2;

    }
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='1'){
            binary[i]='0';

        }else{
            binary[i]='1';
        }

    }
    int decimal;
    int power =0;
    while(binary>0){
        int decimal =(binary%10)*pow(2,power);
        power=power+2;
        binary=binary/10;

    }

}