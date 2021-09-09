// simple interest & compound
#include <iostream>
using namespace std;
int main(){
 int p;
 float r,t;
cout<<"enter the initial principal balance"<<endl;
cin>>p;
cout<<"enter the annual interest rate"<<endl;
cin>>r;
cout<<"enter the time(in year)"<<endl;
cin>>t;
float si = p*r*t;
float ci = p*(1+r*t);
cout<<"simple interest : "<<si/100<<endl;
cout<<"compound interest : "<<ci<<endl;
return 0;
}
