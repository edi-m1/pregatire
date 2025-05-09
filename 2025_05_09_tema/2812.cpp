#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("progresie3.in");
ofstream fout("progresie3.out");
int fr[1001]= {0};
int main()
{
    int x,y,r,ok, maxn;
    ok=1;
    y=-1;
    r=-1;
    maxn = -1;
    while(fin>>x){
        fr[x]++;
        if(x > maxn)
            maxn = x;
    }
    for(int i=0; i<=maxn; i++)
    {
        if(y==-1 && fr[i]!=0)  // am gasit primul nr
        {
            y=i;
        }
        else if(r==-1 && fr[i]!=0)  // am gasit al 2 lea nr
        {
            r=i-y;
        }
        else if(y!=-1 && r!=-1) // verificam restul sirului
        {
            if(((i-y)%r==0 && fr[i]==0) || ((i-y)%r!=0 && fr[i]!=0))
            {
                ok=0;
                break;
            }
        }

    }
    if(ok)
        fout<<r<<endl;
    else
        fout<<"NU"<<endl;
    return 0;
}
