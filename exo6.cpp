#include <iostream>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 6                                 */
/* -------------------------------------------------------------------------- */
//? Ecrivez un programme qui lit au clavier une suite x0, x1, x2, ... 
//? de nombres entiers positifs ou nuls et qui en affiche la moyenne. 
//? La frappe d’un nombre négatif indique la fin de la série.

using namespace std;

int main(int argc, char const *argv[])
{
  int nbr = 5;
  int x, somme;
  double moyenne;

  for (int i = 1; i <= nbr; i++)
  {
    cout << "Donner la valeur x"<<i<<":"<<endl;
    cin >> x;

    somme += x;

    if (x >= 0)
    {
      moyenne = somme/5;
    }
    else
    {
      cout<<"Erreur LEs valeur de x ne doivent pas etre negative";
    }
  }
  
  cout << "La moyenne des valeur sera egale a : "<<moyenne<<endl;
  return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */