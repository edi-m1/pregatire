#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");
int fr[100];
int main() {
    int n,i;
    while(fin>>n)
        fr[n]=1;
    for(i=1;i<100;i=i+2)
        if(fr[i])
            fout<<i<<" ";
    fout<<endl;
    for(i=98;i>=0;i=i-2)
        if(fr[i])
            fout<<i<<" ";
    fout<<endl;
    return 0;
}
