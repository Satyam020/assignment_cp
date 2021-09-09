#include <iostream>
using namespace std;
int main(){
int temp, change,c,f;
cout<<"enter the temprature "<<endl;
cin>>temp;
cout<<"for change in celcius press '0',for fahrenheit press '1'"<<endl;
cin>>change;
if(change == 0){
    c=(temp-32)*5/9;
cout<<c<<"degree celcius";
}
else if(change == 1){
    f = c*(9/5)+32;
 cout<<f<<"degree fahrenheit";
}
else{
    cout<<"enter valid operation plzzz";
}
}
