#include <iostream>

using namespace std;

int main()
{
    char uneseni;
    char prijasnji;
    cin>>uneseni;
    int brojUnesenih=0;
    do{
        prijasnji=uneseni;
        cin>>uneseni;
        brojUnesenih++;
    }while(uneseni>=prijasnji);
    cout<<"kraj"<<endl;
    cout<<brojUnesenih<<endl;
    return 0;
}
