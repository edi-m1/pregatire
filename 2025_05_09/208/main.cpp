#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[21][21],n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            int k=(((i-1)*m) + (j-1))*2 + 1;
            // cout << i << ' ' << j << ' ' << k << endl;
            a[i][j]=k*k;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
