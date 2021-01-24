#include <iostream>
#include <cmath>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 5                                 */
/* -------------------------------------------------------------------------- */
//? Ecrivez un programme qui affiche les valeurs du sinus de tous les angles 
//? de 0 à 90 degrés, par pas de 15 degrés.
//? On souhaite un affichage de la forme :
//? sin(0) = 0.000000
//? sin(15) = 0.258819
//? sin(30) = 0.500000
//? ...
//? sin(90) = 1.000000

using namespace std;

int main(int argc, char const *argv[])
{
  int angle = 90;
  double result;
  for (int i = 0; i <= angle; i += 15)
  {
    result = sin(i);
    cout<< "sin("<<i<<") = "<<result<<endl;
  }
  return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */
