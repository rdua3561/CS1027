#include <iostream>

using namespace std;

int main()
{
 char str[100];
 cout<<"Enter the string"<<endl;

 cin.getline(str,100);
 string(str,100);
 cout<<"you entered"<<"  "<<str<<endl;

    return 0;
}
