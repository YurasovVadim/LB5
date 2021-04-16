#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int s[10];
    cout<<"Введенные числа: "<<endl;
   for(int i=0; i<10; i++)
   {
       cin>>s[i];
   }
    cout<<"10-CC: \t"<<"8-CC: \t"<<"16-CC: \t"<<endl;
   for (int i=0; i<10; i++)
   {
       cout<<setw(2)<<dec<<s[i]<<"\t"<<setw(2)<<oct<<s[i]<<"\t"<<setw(2)<<hex<<s[i]<<"\t"<<endl;
   }
    return 0;
}
