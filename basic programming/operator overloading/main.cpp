#include <iostream>

using namespace std;

class complex{
    int a;
public:
    void set_data(int x)
    {
    a=x;
    }
    void show_data()
    {

    cout<<"\na="<<a;
    }
  friend  complex operator++(complex);

};
complex operator++(complex x)
    {
        complex temp;
        temp.a=++x.a;

        return(temp);
    }


int main()
{
    complex c1,c3;
    c1.set_data(5);
    c1.show_data();

     c3=++c1;
       c1.show_data();
    c3.show_data();
    return 0;
}
