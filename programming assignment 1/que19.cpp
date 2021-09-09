#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int l,b,op;
cout<<"enter the length of rectangle "<<endl;
cin>>l;
cout<<"enter the breadth of rectangle "<<endl;
cin>>b;
int d = sqrt(b*b+l*l);
cout<<"enter the operation for area press 0 "<<endl;
cout<<"enter the operation for perimeter press 1 "<<endl;
cout<<"enter the operation for diagonal press 2 "<<endl;
cin>>op;
if (op==0)
{
  cout<<"area of rectangle:"<<l*b<<endl;  
}
else if (op==1)
{
   cout<<"the perimeter of a rectangle: "<<2*(l+b)<<endl;
}
else if(op==2){
   cout<<"the diagonal of rectangle:"<<d<<endl; 
}
else{
    cout<<"invalid input";
}
return 0;
}
