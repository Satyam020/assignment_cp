#include <iostream>
using namespace std;
int main(){
 int i,fact=1,number;
 cout<<"enter the number"<<endl;
 cin>>number;
 for (i = 1; i <= number; i++)
 {
     fact = fact*i;
 }
 cout<<"the factorial of "<<number<<" is "<<fact;
return 0;
}
