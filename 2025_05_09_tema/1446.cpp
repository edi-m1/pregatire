#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("memory002.in");
ofstream fout("memory002.out");

int main()
{
    long long i,n,s,a,min,max,smin,smax,suma;
    fin>>n;
    min=2000000000;
    max=0;
    suma=0;
    for(i=1;i<=n;i++)
    {
        fin>>a ;
        suma+=a ;
        if(a<min )
        {
            min=a;
            smin=suma;
        }
        if(a>max)
        {
            max=a;
            smax=suma;
        }
    }
    if(smin<smax)
        s=smax-smin+min;
    else
        s=smin-smax+max;
    fout<<s;
    return 0;
}
