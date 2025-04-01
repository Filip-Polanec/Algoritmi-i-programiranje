#include <iostream>

using namespace std;

int main()
{
  /*  int broj, zbroj, znamenka;
cin>>broj;
zbroj=0;
while(broj>0){
    znamenka=broj%10;
    broj/=10;
    zbroj+=znamenka;
}
cout<<zbroj; */

    /* char unos, prijasnji;
    int bunos=0;
    cin>>unos;
    do{
        prijasnji=unos;
        cin>>unos;
        bunos++;
    } while(prijasnji<=unos);
    cout<<bunos<<endl; */

    /* int broj, odluka, nbroj;
    cout<<"Unesi neki broj: ";
    cin>>broj;
    cout<<"Zelis li nastaviti? ";
    cin>>odluka;
    nbroj=broj;
    while(odluka!=0){
    cout<<"Unesi neki broj: ";
    cin>>broj;
    cout<<"Zelis li nastaviti? ";
    cin>>odluka;
    if (broj>nbroj)
        nbroj=broj;
    }
    cout<<"Najveci uneseni broj je: "<<nbroj; */

    /* int unos, nUnos, zbroj=0;
    cin>>unos;
    do{
        cin>>unos;
        zbroj+=unos;
        nUnos++;
        if (zbroj==666)
            break;
    } while (1);
    cout<<nUnos; */

    /* int unos=0, npoz=0, nneg=0, npar=0, nnepar=0, ndjs3=0;
     do{
        cin>>unos;
     if(unos>0)
        npoz++;
     if(unos<0)
        nneg++;
     if(unos%2==0)
        npar++;
     if(unos%2==1)
        nnepar++;
     if(unos%3==0)
        ndjs3++;
     } while(unos!=0);
     cout<<npoz<<" "<<nneg<<" "<<npar<<" "<<nnepar<<" "<<ndjs3; */

     /* char unos;
     int n=0, nsamo=0;
     do{
        cin>>unos;
        n++;
        if (unos=='a'||unos=='e'||unos=='i'||unos=='o'||unos=='u')
            nsamo++;
     } while (n!=50);
     cout<<nsamo<<endl; */

    /*for(char i=97;i<=122;i++)
    cout<<i<<endl; */
    int umnozak=1,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0 && i%7==4)
        umnozak*=i;}
        cout<<umnozak<<endl;

}
