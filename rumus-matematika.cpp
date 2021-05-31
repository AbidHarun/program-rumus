#include<iostream>
using namespace std;
int luasPersegi (int s)
{
    return (s*s);
}

int luasPersegiPanjang (int p, int l)
{
    return (p*l);
}

int main ()
{
    int sisi;
    cout<<"MENGHITUNG LUAS PERSEGI"<<endl;
    cout<<endl;
    cout<<" Sisi persegi  : ";cin>>sisi;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasPersegi(sisi)<<endl;
    int p, l;
    cout<<"MENGHITUNG LUAS PERSEGI PANJANG"<<endl;
    cout<<endl;
    cout<<"panjang  : ";cin>>p;
    cout<<"lebar  : ";cin>>l;
    cout<<endl;
    cout<<"Luas Persegi Panjangnya adalah = "<<luasPersegiPanjang(p,l)<<endl;
}
