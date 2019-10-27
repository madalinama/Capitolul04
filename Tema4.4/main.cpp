/*
4.4) Pointeri spre heap
Declarați un pointer de tip double în zona globală/statică și inițializați-l cu adresa unui bloc de memorie de pe heap, bloc în care puneți valoarea 1.3
Declarați doi pointeri locali de tip double (adică pe stack) și inițializați-i cu adresele a două blocuri de memorie de pe heap, blocuri în care puneți valorile 2.3 respectiv 5.4
Mai declarați pointerul local de tip double pntMedie și inițializați-i cu adresa unui bloc de memorie de pe heap, bloc în care nu puneți nimic.
Folosind dereferențierea calculați media aritmetică a valorilor din primele trei blocuri de memorie și puneți rezultatul în al patrulea bloc de memorie, cel gestionat de pntMedie.
Tipăriți la consolă conținutul celui de-al patrulea bloc de memorie.*/

#include <iostream>

using namespace std;

double * pnt1=new double (1.3);
int main()
{
    double * pnt2=new double (2.3);
    double * pnt3=new double (5.4);
    double * pntMedie=new double;
    *pntMedie=(*pnt1+*pnt2+*pnt3)/3;
    cout<<"Media aritmetică a valorilor din primele trei blocuri de memorie = "<<*pntMedie;
    delete pnt1;
    pnt1=NULL;
    delete pnt2;
    pnt2=NULL;
    delete pnt3;
    pnt3=NULL;
    delete pntMedie;
    pntMedie=NULL;
    return 0;
}
