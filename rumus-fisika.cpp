#include<iostream>
using namespace std;
int gaya (int m, int a)
{
    return (m*a);
}
int main ()
{
    int massa, percepatan;
    cout<<"RUMUS FISIKA"<<endl;
    cout<<"MENGHITUNG GAYA"<<endl;
    cout<<endl;
    cout<<" Massa Benda  : ";cin>>massa;
    cout<<" Percepatan   : ";cin>>percepatan;
    cout<<endl;
    cout<<"Jadi Gayanya = "<<ep(massa,percepatan)<<" Newton"<<endl;
}
