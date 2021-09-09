#include <iostream>
using namespace std;
int main(){
 int a,b;
 
 cout<<"enter the first number"<<endl;
 cin>>a;
 cout<<"enter the second number"<<endl;
cin>>b;
 cout<<"vslue of a & b without swap"<<a<<b<<endl;
 a=a+b;
 b=b-a;
 b=b+b;
cout<<"value of a & b after swap"<<endl;
return 0;
}
