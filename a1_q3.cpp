#include<iostream>
using namespace std;

int main()
{
    int n, i, flag=0;
    cout<<"Enter a no.: ";
    cin>>n;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<n<<"isn't a prime no.";
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<"is a prime no.";
    }
    return 0;
}
