#include <iostream>

using namespace std;

enum Tip
{ mere=1, pere, caise, capsuni };

struct Produs
{
  Tip tipProdus;
  float cantitate;
  float pret;
};
int main ()
{
  Produs fruct[3];
  unsigned int optiuneFruct;
  int valTot=0;

  for (int i = 0; i < 3; ++i)
    {
          cout<<"Introduceti tipul (1-mere,2-pere,3-caise,4-capsuni): ";
          cin>>optiuneFruct;
          fruct[i].tipProdus = static_cast<Tip>(optiuneFruct);
          cout << "Introduceti cantitatea: ";
          cin >> fruct[i].cantitate;
          cout << "Introduceti pretul: ";
          cin >> fruct[i].pret;
    }
cout <<"Produs   "<<"Cantitate   "<<"Pret   "<<endl;
for (int i=0;i<3;++i)
{

    switch(fruct[i].tipProdus)
    {
        case mere : cout <<"mere   ";break;
        case pere :cout <<"pere   ";break;
        case caise :cout <<"caise   ";break;
        case capsuni :cout <<"   capsuni";break;
        ;
    }
   cout <<fruct[i].cantitate<<"   "<<fruct[i].pret<<endl;
   valTot=valTot+(fruct[i].cantitate *fruct[i].pret);
}
   cout <<endl;
   cout<<"Valoare stoc "<<valTot;
return 0;

}

