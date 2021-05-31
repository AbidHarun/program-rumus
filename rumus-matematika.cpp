#include<iostream>
using namespace std;
int luasPersegi (int s)
{
    return (s*s);
}
int main ()
{
    int sisi;
    cout<<"MENGHITUNG LUAS PERSEGI"<<endl;
    cout<<endl;
    cout<<" Sisi persegi  : ";cin>>sisi;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasPersegi(sisi)<<endl;
}
