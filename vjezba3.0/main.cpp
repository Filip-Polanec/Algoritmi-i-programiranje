#include <iostream>

using namespace std;

int main()
{
    int p[10], naj=p[0];
bool o=1;
for(int i=0;i<10;i++){
    p[i]=rand()%11;
    cout<<p[i]<<endl;
    if(naj<p[i]);
        o=0;
}
if(o==1)
    cout<<"da";
else
    cout<<"ne";
    return 0;
}
