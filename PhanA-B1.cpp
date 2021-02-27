#include <iostream>
using namespace std;
void testmang(int a[])
{
    cout<<&a<<endl;
    cout<<&(a[0])<<endl;
}
main()
{
    int a[10];
    testmang(a);
    cout<<&a<<endl<<&(a[0]);
}
//Nhan xet: Voi mang truyen vao ham thi dia chi ten mang khac dia chi phan tu dau tien, voi mang trong ham main thi dia chi mang la dia chi phan tu dau tien cua mang
