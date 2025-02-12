#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Upisi neki broj: "<<endl;
   cin>>a;
   if(a%3==0){
    cout<<"dijeljiv je s 3"<<endl;
   }
   else{
    cout<<"nije dijeljiv s 3"<<endl;
   }
    return 0;
}
