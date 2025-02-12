#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<("Upisi prvi broj: ");
    cin>>a;
    cout<<("Upisi drugi broj: ");
    cin>>b;
    int c,d;
    c=a%10;
    d=b%10;
    if(c>d)
        cout<<("Znamenka jedinice prvoga broja je veca.");
    if(d>c)
        cout<<("Znamenka jedinice drugoga broja je veca.");
    if(c==d)
        cout<<("Znamenke jedinica od oba broja su jednake.");
    return 0;
}
