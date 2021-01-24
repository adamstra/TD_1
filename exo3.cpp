#include <iostream>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 3                                 */
/* -------------------------------------------------------------------------- */
//? Écrire un programme qui permet de convertir un temps données 
//? en secondes en jours, heurs, minutes, et secondes.

using namespace std;

int main(int argc, char const *argv[])
{
  int seconde;
  int hr, mn, s;

  cout << "Donnez le temp en seconde :"<<endl;
  cin>>seconde;

  cout << "Le temp donner en seconde  est : "<< seconde <<"s" <<endl;
  hr = seconde/60/60%24;
  mn = seconde/60%60;
  s = seconde%60;

  cout <<"Les "<<seconde<<"s"<<" donne : "<<hr<<"h-"<<mn<<"mn-"<<s<<"s"<<endl;
  return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */
