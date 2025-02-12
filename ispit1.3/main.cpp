#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Upisi neki broj: "<<endl;
   cin>>a;
   if((a>1)&&(a<=10)){
    cout<<">1 i<=10"<<endl;
   }
   if((a>10)&&(a<=100)){
    cout<<">10 i <=100"<<endl;
   }
   if((a>100)&&(a<=1000)){
    cout<<">100 i <=1000"<<endl;
   }
   else{
    cout<<"van intervala"<<endl;
   }

    return 0;
}
