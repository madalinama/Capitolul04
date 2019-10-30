/*4.6) Șiruri și șiruri
Declarați șirul sirStack pe stack, fără dimensiune explicită și inițializați-l cu un text la alegere.
Declarați șirul sirHeap pe heap, dându-i ca dimensiune dimensiunea șirului sirStack. Notă: faceți acest lucru fără să numărați câte caractere ați introdus în textul de la punctul 1 !
Copiați conținutul șirului sirStack în șirul șirHeap.
Atișați la consolă șirul sirHeap.
Determinați câte cuvinte are textul introdus la punctul 1și afișați rezultatul.*/


#include <iostream>
using namespace std;
int main()
{
    char sirStack[]="Acesta este un sir de caractere.";
    char*sirHeap=new char[sizeof(sirStack)];
    for (int i =0; i<sizeof(sirStack);++i)
    sirHeap[i]=sirStack[i];
    cout<<sirHeap<<endl;
    int nr =0;
    for (int i =0; i<sizeof(sirStack);++i)
    {
       if (sirStack[i]==' ')
        nr++;
    }
    cout<<"Numarul de cuvinte din sir este = "<<nr+1<<endl;
    cout<<"Sirul sirStack are "<<sizeof(sirStack)<<" elemente.";

    return 0;
}
