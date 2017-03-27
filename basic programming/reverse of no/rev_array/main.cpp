#include<iostream>
using namespace std;


int main(){
    int n,t=0;
    cin >> n;
   int i=0,j=n-1;
    int arr[n];
    for(int a = 0;a <n; a++){
       cin >> arr[a];
    }
     while(i<j)
         {
         t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
         i++;
         j--;
     }
     for(int a = 0;a < n; a++){
         cout<<" "<<arr[a];
     }
    return 0;
}
