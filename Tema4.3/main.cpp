/*4.3) Pointeri void
Declarați o variabilă de tip int
Declarați un pointer void și inițializați-l cu adresa variabilei de mai sus
Atribuiți o valoare variabilei prin intermediul pointerului. E nevoie să folosiți operatorul static_cast pentru conversia explicită, respectiv dereferențierea
Tipăriți de 2 ori variabila la consolă, o dată în mod direct și a doua oară prin intermediul pointerului void.*/


#include <iostream>

using namespace std;

int main()
{
int var;
void*pntvar;
pntvar=&var;
*static_cast<int*>(pntvar)=1000;
cout<<"Valoarea variabilei var in mod direct = "<<var<<endl;
cout<<"Valoarea variabilei var prin dereferentiere = "<<*static_cast<int*>(pntvar)<<endl;
return 0;
}
