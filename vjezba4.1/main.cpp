#include <iostream>

using namespace std;

int main()
{
    int p[4][5];
    for (int i=0;i<4;i++){
        int najmanji=101;
        for (int j=0;j<5;j++){
            if (p[i][j]<najmanji)
                najmanji=p[i][j];
        }
        cout<<najmanji<<endl;
    }
    return 0;
}
