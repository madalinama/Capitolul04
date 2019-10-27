/*4.2) Pointeri
Declarați ( fără să inițializați ) patru variabile de tip short, dându-le numele ident1, ident2, identSuma si identProdus.
Declarați patru pointeri către short, dându-le aceleaşi nume ca mai sus, prefixate cu prefixul "pnt" (adică pntIdent1 șamd)
Atribuiți fiecărui pointer adresa variabilei care îi corespunde
Atribuiți câte o valoare variabilelor ident1 şi ident2 folosind dereferențierea pointerilor corespunzători
Atribuiți variabilei identSuma suma variabilelor ident1 şi ident2, folosind pentru toate 3 dereferențierea pointerilor corespunzători (adică NU scriind  identSuma = ident1 + ident2)
Atribuiți variabilei identProdus produsul variabilelor ident1 şi ident2, folosind pentru toate 3 dereferențierea pointerilor corespunzători (adică NU scriind  identProdus = ident1 * ident2)
Tipăriți la consolă variabilele identSuma şi identProdus folosind dereferențierea pointerilor corespunzători*/


#include <iostream>

using namespace std;

int main()
{
short ident1,ident2,identSuma,identProdus;
short *pntident1=&ident1,*pntident2=&ident2,*pntidentSuma=&identSuma,*pntidentProdus = &identProdus;
*pntident1=6;
*pntident2=4;
*pntidentSuma=*pntident1+*pntident2;
*pntidentProdus=*pntident1**pntident2;
cout<<"Suma variabilelor ident1+ident2 = "<<*pntidentSuma<<endl;
cout<<"Produsul variabilelor ident1*ident2 = "<<*pntidentProdus<<endl;
return 0;
}
