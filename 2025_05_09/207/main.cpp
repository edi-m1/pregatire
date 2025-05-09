#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[25][25],n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j] = n-j+1;
        }
    }
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
