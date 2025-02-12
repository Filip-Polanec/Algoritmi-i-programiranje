#include <iostream>

using namespace std;

int main()
{
   char odabir;
   int v1,v2;
   cout<<"Upisi nepoznatu velicinu: "<<endl;
   scanf("%c %i %i", &odabir, &v1, &v2);
   if (odabir=='R'){
    int U=v1;
    int I=v2;
    int R=U/I;
    cout<<R;
   }
   else if (odabir=='U'){
    int R=v1;
    int I=v2;
    int U=R*I;
    cout<<U;
   }
   else if (odabir=='I'){
    int U=v1;
    int R=v2;
    int I=U/R;
    cout<<I;
   }
    return 0;
}
