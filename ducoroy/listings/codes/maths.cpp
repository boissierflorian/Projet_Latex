#include <iostream>
#include <cmath>  //Ne pas oublier cette ligne 
using namespace std;
int main()
{
    double const nombre(16);                    
    double resultat;        
    resultat = sqrt(nombre); 
    cout << "La racine de " << nombre << " est " << resultat << endl;
    return 0;
}
