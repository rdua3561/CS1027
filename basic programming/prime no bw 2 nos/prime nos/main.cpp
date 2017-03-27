#include <iostream>

using namespace std;

int main()
{
   int i,n,x,m;
   cout<<"Enter the two nos in which you will gonna find all prime nos"<<endl;
   cin>>m>>n;
   int c=0;
   for(i=m+1;i<=n-1;i++)
   {
       for(x=2;x<i;x++)
       {
           if(i%x==0)

         break;

       }
       if(x==i)
       {
           cout<<" "<<i;
       }

   }
    return 0;
}
