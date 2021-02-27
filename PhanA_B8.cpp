#include<iostream>
using namespace std;
void output(int n, bool a[])
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]) cout<<i;
    }
    cout<<endl;
}
void combination(int k, int n,bool a[]) {

if (k <1) {
        output(n,a);
        return;
    }
    a[k] = 0;
    combination(k - 1,n,a);
    a[k] = 1;
    combination(k - 1,n,a);
}
main()
{ bool a[1000];
    int n;
    cin>>n;
    combination(n,n,a);
}
