#include <iostream>
using namespace std;
int main(){
int s1,s2,s3,s4,s5;
cout<<"enter your first subject marks"<<endl;
cin>>s1;
cout<<"enter your second subject marks"<<endl;
cin>>s2;
cout<<"enter your third subject marks"<<endl;
cin>>s3;
cout<<"enter your fourth subject marks"<<endl;
cin>>s4;
cout<<"enter your fifth subject marks"<<endl;
cin>>s5;
int total = s1 + s2 + s3 + s4 + s5;
int per = total/5;
string result = (total>=165)?"passed":"failed";
cout<<"you"<<result<<"the exam"<<endl;
cout<<"your percentage :"<<per<<"%"<<endl;
return 0;
}
