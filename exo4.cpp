#include <iostream>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 4                                 */
/* -------------------------------------------------------------------------- */
//? Écrire un programme qui demande à l'utilisateur de saisir la largeur et 
//? la longueur d'un rectangle et qui en affiche le périmètre et la surface.

using namespace std;

int main(int argc, char const *argv[])
{
  double largeur , longueur, perimetre, surface;

  cout << "Donnez la largeur du rectangle : " << endl;
  cin >> largeur;

  cout << "Donnez la longueur du rectangle : " << endl;
  cin >> longueur;

  perimetre = (longueur + largeur) * 2;
  surface = longueur * largeur;

  cout << "Le perimetre est de : "<<perimetre<<endl;
  cout << "La surface est de : "<<surface<<endl;
  return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */
