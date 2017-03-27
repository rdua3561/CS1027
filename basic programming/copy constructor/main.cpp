#include <iostream>

using namespace std;

class complex{
    int a,b;
public:
complex(int x,int y)
{
    a=x;
    b=y;
    cout<<"\na="<<a<<"\nb="<<b;
}
complex()
{

}
complex(int y)
{
    b=y;
    cout<<"\nb="<<b;
}
complex (complex &x)
{
  a=x.a;
  b=x.b;
  cout<<"\na="<<a<<"\nb="<<b;
}

};

int main()
{
   complex c1(6,5),c2,c3(3);
    complex c4=c1;
    return 0;
}
