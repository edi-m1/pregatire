
#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("secventa.in");
ofstream fout("secventa.out");
int main()
{
    int v[100001],i,j,s,smax,p,u,n;
    smax=-1;
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    p=1;
    u=-1;
    for(i=1;i<=n;i++)
        {
        j=i+1,s=v[i];
        while(j<=n&&v[j]%2!=v[j-1]%2)
            s+=v[j],j++;
        if(j-i>u-p+1)
            u=j-1,p=i,smax=s;
        else
            if(j-i==u-p+1)
                if(s>smax)
                    u=j-1,p=i,smax=s;
                else
                    if(s==smax)
                        u=j-1,p=i;
        i=j-1;
    }
    fout<<p<<" "<<u;
    return 0;
}
