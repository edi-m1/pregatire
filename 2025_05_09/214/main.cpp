#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,a[10][10],cnt=0,i,j,cif,cn;
    cin>>n;
    cn=n;
    do
    {
        cn=cn/10;
        cnt++; 
    } while (cn);
    
    cn = n;
    j=1;
    do
    {
        cif=cn%10;
        cn=cn/10;
        for(i=1;i<=cnt;i++){
            a[i][j] = cif;
        }
        j++;
    } while (cn);

    for(i=1;i<=cnt;i++)
    {
        for(j=1;j<=cnt;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
