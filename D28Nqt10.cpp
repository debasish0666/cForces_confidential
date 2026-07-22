#include<bits/stdc++.h>
using namespace std;
int main(){
    float fuel;
    cout<<"Enter the number of litres to fill the tank: "<<endl;
    cin>>fuel;
    float dist;
    cout<<"Enter the distance Covered: "<<endl;
    cin>>dist;
    float mileage = (fuel/dist)*100;
    cout<<"Liters/100km "<<endl;
    cout<<mileage<<endl;

    float MiUS= (0.2642*fuel)/(dist*0.6214);
    cout<<"Miles/gallons "<<endl;
    cout<<MiUS;
}