#include <iostream>

using namespace std;

int main()
{
    //lijepo ispisano 2D polje [10][10] svaki red se povećava za jedan
    int p[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            p[i][j]=i;
        cout<<p[i][j]<<"\t";
    }
    cout<<endl;
    }
    int p[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            p[i][j]=i;
            if (p[i][j]==8)
                p[i][j]=3;
        cout<<p[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<endl;
    //lijepo ispisano 2D polje [10][10] svaki stupac se povećava za jedan
    int p[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            p[i][j]=j;
        cout<<p[i][j]<<"\t";
    }
    cout<<endl;
    }
    return 0;

}
