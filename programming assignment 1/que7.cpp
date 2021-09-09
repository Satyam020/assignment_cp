#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
cout<<"enter the value of c "<<endl;
cin>>c;
int discrimination = b*b-4*a*c;
int x1 = -b + sqrt(discrimination);
x1 = x1/2*a;
int x2 = -b - sqrt(discrimination);
x2 = x2/2*a;
if (discrimination<=0)
{
    cout<<"value of x is : 0"<<endl;
}
else if (discrimination>=0)
{
    cout<<"value of x1 is :"<<x1<<endl;
    cout<<"value of x2 is :"<<x2<<endl;
}
else{
    cout<<"sorry incorrect";
}

cout<<""<<endl;
    return 0;
}
