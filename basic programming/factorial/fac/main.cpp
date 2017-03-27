#include <iostream>

using namespace std;
int fibb(int x)
{
    int f=1;
    while(x>=1)

    {


    f=f*x;
    x--;
    }
    return f;
}


int main()
{
    int n,s;
cout<<"enter the value"<<endl;
cin>>n;
s=fibb(n);
cout<<s;
    return 0;
}

