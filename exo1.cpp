#include <iostream>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 1                                 */
/* -------------------------------------------------------------------------- */
//? Écrire un programme qui permet de saisir deux nombres puis affiche la somme,
//? le produit, le quotient, et le reste de ces nombres.

using namespace std;

int main(int argc, const char** argv) {
  int a = 10, b = 2;
  int somme = a + b;
  int soustraction = a - b;
  int multiplication = a * b;
  int division = a / b;

  cout << "La somme de "<< a <<" + " << b <<" = "<<somme<< endl;
  cout << "La soustraction de "<< a <<" - " << b <<" = "<<soustraction<< endl;
  cout << "La multiplication de "<< a <<" x " << b <<" = "<<multiplication<< endl;
  cout << "La division de "<< a <<" / " << b <<" = "<<division<< endl;

    return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */