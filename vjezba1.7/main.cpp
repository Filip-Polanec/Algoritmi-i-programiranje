#include <iostream>

using namespace std;

int main()
{
    int bodovi;
    cout<<"Unesite svoj broj bodova: "<<endl;
    cin>>bodovi;
    int b5,b4,b3,b2;
    cout<<"Unesite razine: "<<endl;
    cin>>b5>>b4>>b3>>b2;
    if (bodovi>=b5){
        cout<<"odlican";
    }
    else if (bodovi>=b4){
        cout<<"vrlo dobar";
    }
    else if (bodovi>=b3){
        cout<<"dobar";
    }
    else if (bodovi>=b2){
        cout<<"vrlo dobar";
    }
    else {
        cout<<"nedovoljan";
    }
    return 0;
}
