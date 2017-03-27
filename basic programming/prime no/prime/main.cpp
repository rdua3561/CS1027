#include <iostream>

using namespace std;

int main()
{
    int n,i,c=0;
    cout<<"ENTER A NO"<<endl;
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           c++;
        }
    }
    if(c==0)
    {
        cout<<"Prime";
    }
    else{

        cout<<"Not Prime";
    }
    return 0;
}
