#include<iostream>
using namespace std;
int luasPersegi (int s)
{
    return (s*s);
}

int luasPersegiPanjang (int p, int l)
{
    return (p*l);
  
int luasSegitiga (int alas)
{
    return ( 1/2 * alas );

}

int main ()
{
    int sisi, alas, p, l;
    cout<<"MENGHITUNG LUAS PERSEGI"<<endl;
    cout<<endl;
    cout<<" Sisi persegi  : ";cin>>sisi;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasPersegi(sisi)<<endl;
 
    cout<<"MENGHITUNG LUAS PERSEGI PANJANG"<<endl;
    cout<<endl;
    cout<<"panjang  : ";cin>>p;
    cout<<"lebar  : ";cin>>l;
    cout<<endl;
    cout<<"Luas Persegi Panjangnya adalah = "<<luasPersegiPanjang(p,l)<<endl;

    cout<<"MENGHITUNG LUAS SEGITIGA"<<endl;
    cout<<endl;
    cout<<" Alas  : ";cin>>alas;
    cout<<endl;
    cout<<"Luas Perseginya adalah = "<<luasSegitiga(alas)<<endl;
}
