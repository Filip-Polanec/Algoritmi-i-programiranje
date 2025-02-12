#include <iostream>

using namespace std;

int main()
{
   int a;
   cin>>a;
   if(a>1 && a<9)
    cout<<("Broj je veci od 1.");
   if(a>10 && a<99)
    cout<<("Broj je veci od 10.");
   if(a>100 && a<999)
    cout<<("Broj je veci od 100.");
   if(a>1000 && a<9999)
    cout<<("Broj je veci od 1000.");
    return 0;
}
