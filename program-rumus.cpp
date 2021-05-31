#include<iostream>
using namespace std;
int ep (int m, int g, int h)
{
    return (m*g*h);
}
int main ()
{
    int massa, tinggi, grav = 10;
    cout<<"MENGHITUNG ENERGI POTENSIAL"<<endl;
    cout<<endl;
    cout<<" Massa Benda  : ";cin>>massa;
    cout<<" Tinggi       : ";cin>>tinggi;
    cout<<endl;
    cout<<"Energi Potensialnya = "<<ep(massa,grav,tinggi)<<" Joule"<<endl;
}

disini baris baru rumus lingkaran
