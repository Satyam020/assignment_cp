#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    for (int i = 2; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            cout<<"its a prime number"<<endl;
            break;
        }
        
    }
    if (n==0||n==1)
    {
        cout<<"not prime";
    }
    
    
    return 0;
}
