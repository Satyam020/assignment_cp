#include <iostream>
using namespace std;
int main(){
 int a,b,c;
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
cout<<"enter the value of c "<<endl;
cin>>c;
if(a>=b && a>=c){
    cout<<"a is gratest";
}
else if(b>=c && b>=a){
    cout<<"b is gratest";
}
else{
    cout<<"c is gratest";
}
cout<<""<<endl;
    return 0;
}
