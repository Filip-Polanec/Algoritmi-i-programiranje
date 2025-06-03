#include <iostream>

using namespace std;

int main()
{
    int p[10][10], z=0, nz;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
                p[i][j]=rand()%101;
        }}
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            z+=p[i][j];
            cout<<p[i][j]<<"\t";
        } cout<<"Zbroj je: "<<z<<endl;
        if (i==0)
            nz=z;
        else if (z<nz)
            nz=z;
    }cout<<"Najmanji zbroj je: "<<nz<<endl;
    return 0;
}
