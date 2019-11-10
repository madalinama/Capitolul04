/*.8) Structuri și terenuri
Definiți structura Suprafata care să conțină doi membri, _lung și _lat, de tip float
Definiți structura Teren care să conțină membrii:
_cnpProprietar de tip long long
_tipTeren de tip enum TipTeren. Definiți respectivul enum cu variantele: agricol, pasune, livada și viran
_suprafata de tip Suprafata
_arie de tip float
În funcția main declarați pe stack variabila unTeren de tip Teren.
Atribuiți valori membrilor _lung și _lat din membrul _suprafata al variabilei unTeren.
Atribuiți valori celorlalți membrii al variabilei unTeren, cu excepția membrului _arie.
Membrului _arie atribuiți-i ca valoare produsul membrilor _lung și _lat ai membrului _suprafață
Tot în funcția main declarați pe heap variabila oMovila, de tip Teren.
Copiați în membrii variabilei oMovila valorile membrilor echivalenți ai variabilei unTeren,
Tipăriți la consolă toți membrii variabilei oMovila
Eliberați spațiul ocupat de oMovila :)*/

#include <iostream>

using namespace std;
enum TipTeren { agricol, pasune, livada, viran};
struct Suprafata
{
    float lat, lung;
};

struct Teren
{   long long cnpProprietar;
    TipTeren tipTeren;
    float arie;
    Suprafata suprafata;

};
int main()
{
    Teren unTeren;
    unTeren.suprafata.lat=50.9;
    unTeren.suprafata.lung=150.9;
    unTeren.tipTeren=agricol;
    unTeren.cnpProprietar=1850802211821;
    unTeren.arie=unTeren.suprafata.lat*unTeren.suprafata.lung;
    cout << "Aria este " << unTeren.arie<<endl;
    cout <<endl;
    Teren*oMovila=new Teren;
    oMovila->arie=unTeren.arie;
    oMovila->cnpProprietar=unTeren.cnpProprietar;
    oMovila->suprafata.lat=unTeren.suprafata.lat;
    oMovila->suprafata.lung=unTeren.suprafata.lung;
    oMovila->tipTeren=unTeren.tipTeren;
    cout << "Aria este " << oMovila->arie<<endl;
    cout << "Cnp Proprietar "<<oMovila->cnpProprietar<<endl;
    cout <<"Tipul Teren "<<oMovila->tipTeren<<endl;
    cout <<"Lungimea teren "<<oMovila->suprafata.lung<<endl;
    cout <<"Latimea teren "<<oMovila->suprafata.lat<<endl;
    delete oMovila;
    oMovila=NULL;
    return 0;
}
