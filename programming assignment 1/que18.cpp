#include <iostream>
using namespace std;
int main(){
 int a,b;
 cout<<"enter the first value "<<endl;
cin>>a;
cout<<"enter the second value "<<endl;
cin>>b;
int operation ;
switch (a%2)
{
case(0):
   cout<<"a is a prime number"<<endl;
    break;
default:
   cout<<"a is a odd number"<<endl;
    break;
}
switch (b%2)
{
case(0):
   cout<<"b is a prime number"<<endl;
    break;
default:
   cout<<"b is a odd number"<<endl;
    break;
}
int c = a + b;
switch (c%2)
{
case(0):
   cout<<"a+b is a prime number"<<endl;
    break;
default:
   cout<<"a+b is a odd number"<<endl;
    break;
}
int d = a/b;
switch (d%2)
{
case(0):
   cout<<"a/b is a prime number"<<endl;
    break;
default:
   cout<<"a/b is a odd number"<<endl;
    break;
}
    return 0;
}
