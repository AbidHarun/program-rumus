#include<iostream>
using namespace std;
int luasPersegi (int s)
{
    return (s*s);
}

int luasSegitiga (int alas)
{
    return ( 1/2 * alas );
}

int main ()
{
    int sisi, alas;
    cout<<"MENGHITUNG LUAS PERSEGI"<<endl;
    cout<<endl;
    cout<<" Sisi persegi  : ";cin>>sisi;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasPersegi(sisi)<<endl;
    cout<<"MENGHITUNG LUAS SEGITIGA"<<endl;
    cout<<endl;
    cout<<" Alas  : ";cin>>alas;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasSegitiga(alas)<<endl;
}
