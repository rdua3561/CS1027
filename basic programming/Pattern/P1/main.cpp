#include <iostream>

using namespace std;

int main()
{
   int i,j,k=1;
   for(i=1;i<=5;i++){

    for(j=1;j<=9;j++)
    {
        if(j>=6-i&&j<=i+4&&k)
        {
          cout<<"*" ;
   k=0;
        }
        else{
                cout<<" ";

        }
    }
    cout<<"\n";
   }
    return 0;
}
