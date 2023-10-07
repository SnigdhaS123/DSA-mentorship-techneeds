#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    
    if(marks>90)
    {
        cout<<"Excellent!";
    }
    else if(80<marks<=90)
    {
        cout<<"Good";
    }
    else if(70<marks<=80)
    {
        cout<<"Fair";
    }
    else if(60<marks<=70)
    {
        cout<<"Meets exepctations";
    }
    else
    {
        cout<<"Below par";
    }
  return 0;
}
