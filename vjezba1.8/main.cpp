#include <iostream>

using namespace std;

int main()
{
    float cijenasPDV, cijenabezPDV;
    cout<<"Upisi cijenu bez PDV-a: "<<endl;
    cin>>cijenabezPDV;
    cijenasPDV=cijenabezPDV*1.25;
    printf("Cijena s PDV-om iznosi %f",cijenasPDV);
    cout<<cijenasPDV;
    return 0;
}
