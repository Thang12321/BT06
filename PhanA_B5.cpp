#include <iostream>
using namespace std;
long F(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return F(n-1)+F(n-2);
}
main()
{
    int n;
    cin>>n;
    cout<<F(n)<<endl;
    long s1=0,s2=1;
    for(int i=0;i<n;i++)
    {
       long  s=s2;
        s2+=s1;
        s1=s;
    }
    cout<<s1;
}
// Nhan xet: De quy lau hon vong lap
