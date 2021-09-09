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
int Total = s1 + s2 + s3 + s4 + s5;
cout<<"total marks obtain: "<<Total<<endl;
int per = Total/5;
cout<<"total percentage obtain: "<<per<<endl;

if (Total>=165){
cout<<"congratulation you are pass:"<<endl;
}
else{
    cout<<"Sorry you are fail"<<endl;
}
return 0;

}
