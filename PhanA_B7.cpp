#include<iostream>
using namespace std;
void inra(char A[],int n) {
    for (int i = 1; i <= n; i++)
        cout << A[i] ;
    cout << endl;
}

void layhoanvi(int k,char A[], bool Bool[], string s,int n) {
    for (int i = 0; i < n; i++) {

        if (!Bool[i]) {
            A[k] = s[i];
            Bool[i] = 1;
            if (k == n)
               inra( A,n);
            else
                layhoanvi(k + 1,A,Bool,s,n);
            Bool[i] = 0;
        }
    }
}
main()
{
    string s;
    cin>>s;
    int n=s.length();
    char A[1000];
    bool Bool[1000]={0};
    layhoanvi(1,A,Bool,s,n);

}
