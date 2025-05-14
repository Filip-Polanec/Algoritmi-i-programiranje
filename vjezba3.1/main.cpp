#include <iostream>

using namespace std;

int main()
{
  /* int p[100],n=0;
   for (int i=0;i<100;i++)
    if(p[i]>50)
    n++;
   cout<<n<<endl; */

  /* int p[100],n=0;
   for (int i=0;i<100;i++)
    if(p[i]%2==0)
    n++;
   cout<<n<<endl; */

  /* int p[100],n=0;
   for (int i=0;i<100;i++)
    if(p[i]%2!=0){
    p[i]=0;
    cout<<p[i]<<endl;
    } */

  /*  int p[10];
   for (int i=0;i<10;i++)
       cin>>p[i];
   for (int i=0;i<10;i++){
    if(p[i]%7==0)
       p[i]=-p[i];
       cout<<p[i]<<endl;} */


    int p[5];
   for (int i=0;i<5;i++)
        cin>>p[i];
   for (int i=0;i<5;i++){
       if (p[i]==20)
         break;
     else;
         cout<<p[i]<<endl;}

  /*  int p[100];
   for (int i=0;i<100;i++){
        p[i]=99-i;
        cout<<p[i]<<endl;} */

  /*  int p[100];
   for (int i=0;i<100;i++){
    if(p[0]>=p[i]<=p[49])
    p[i]=i-1;
   if(p[50]>=p[i]<=p[99])
    p[i]=i+1;
    cout<<p[i]<<endl;
   } */

  /* char p[10];
   int n=0;
   for (int i=0;i<10;i++){
    cin>>p[i];
    if(p[i]>p[0])
        n++;
   }
   cout<<n<<endl; */

  /* int p[100],n=0;
   for (int i=0;i<100;i++){
        if (p[i]==p[i+1])
        n++;
   }
   cout<<n<<endl; */


    return 0;
   }
