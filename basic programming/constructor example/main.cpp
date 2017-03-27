#include <iostream>

#include<string.h>

using namespace std;

class complex{
    int i,j;
    char t1,t2;
    char st1[50],st2[50];
public:
complex()
{

    cin.getline(st1,50);
     cin.getline(st2,50);

}
char length()
{


i=strlen(st1);
    cout<<"Length of string 1 is"<<i<<endl;

j=strlen(st2);
cout<<"Length of string 2 is"<<j<<endl;
}
char comp()
{

    t1=st1[0];
    st1[0]=st2[0];
    st2[0]=t1;
    t2=st1[i-1];
    st1[i-1]=st2[j-1];
    st2[j-1]=t1;


}

char disp()
{
    cout<<st1<<"\n"<<st2;
}


};

int main()
{
   complex c1;
   c1.length();
   c1.comp();
   c1.disp();


    return 0;
}

