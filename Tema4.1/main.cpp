/*
4.1) Variabile globale și locale
Declarați și inițializați următoarele variabile:

O variabilă globală
O variabilă globală statică
O variabilă într-un namespace
Două variabile locale
O variabilă locală statică
Tipăriți la consolă adresele tuturor variabilelor folosind operatorul &*/

#include <iostream>

using namespace std;
namespace NameSpaceulMeu
{
unsigned int varN =60300;
}
bool varA=1;
static int varB=25;

int main()
{

float varA=1.5;
int varC =0;
static unsigned int varD =62003;
cout<<"Adresa variabilei globale varA = "<<&::varA<<endl;
cout<<"Adresa variabilei statice globale varB = "<<&::varB<<endl;
cout<<"Adresa variabilei locale varA = "<<&varA<<endl;
cout<<"Adresa variabilei locale varC = "<<&varC<<endl;
cout<<"Adresa variabilei globale statice varD = "<<&varD<<endl;
cout <<"Adresa variabilei NameSpaceulMeu= "<< &NameSpaceulMeu::varN << endl;
return 0;
}

