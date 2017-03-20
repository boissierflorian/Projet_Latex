#include <iostream>
#include <cmath>  //Ne pas oublier !
using namespace std;
int main()
{
//Variables utiles
   double a(0), b(0); 
   cout << "Calcul de a^b !" << endl;
   //Premier nombre
   cout << "Donnez une valeur pour a : "; 
   cin >> a;
   //Second nombre
   cout << "Donnez une valeur pour b : "; 
   cin >> b;
   double const resultat(pow(a, b)); 
   cout <<a<<"^"<<b<<"="<<resultat<<endl;

   return 0;
}