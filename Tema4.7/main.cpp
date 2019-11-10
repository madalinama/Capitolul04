#include <iostream>
#include <string>
using namespace std;

struct Adresa
{   char prenume[30],strada[30],oras[30],judet[30];
    int numar, cod;
};

struct AdresaNoua
{   string Prenume,Strada,Oras,Judet;
    int Numar;
};
int main()

{
   /* Adresa adresa;
    cout<<"Va rugam introduceti prenumele dvs.:"<<endl;
    cin>>adresa.prenume;
    cout<<"Va rugam introduceti strada: "<<endl;
    cin>>adresa.strada;
    cout<<"Va rugam introduceti orasul: "<<endl;
    cin>>adresa.oras;
    cout<<"Va rugam introduceti judetul: "<<endl;
    cin>>adresa.judet;
    cout<<"Va rugam introduceti numarul: "<<endl;
    cin>>adresa.numar;
    cout<<"Ma numesc "<<adresa.prenume<<endl;
    cout<<"M-am nascut in judetul "<<adresa.judet<<", orasul "<<adresa.oras<<", pe strada "<<adresa.strada<<" la numarul "<<adresa.numar<<endl;
    cout<<endl;*/

    AdresaNoua adresanoua;
    cout<<"Va rugam introduceti prenumele dvs.: "<<endl;
    getline (std::cin,adresanoua.Prenume);
    cout<<"Va rugam introduceti strada: "<<endl;
    getline (std::cin,adresanoua.Strada);
    cout<<"Va rugam introduceti orasul: "<<endl;
    getline (std::cin,adresanoua.Oras);
    cout<<"Va rugam introduceti judetul: "<<endl;
    getline (std::cin,adresanoua.Judet);
    cout<<"Va rugam introduceti numarul: "<<endl;
    cin>>adresanoua.Numar;
    cout<<"Ma numesc "<<adresanoua.Prenume<<endl;
    cout<<"M-am nascut in judetul "<<adresanoua.Judet<<", orasul "<<adresanoua.Oras<<", pe strada "<<adresanoua.Strada<<" la numarul "<<adresanoua.Numar<<endl;
return 0;
}
