#include <iostream>
/* -------------------------------------------------------------------------- */
/*                                 Exercice 2                                 */
/* -------------------------------------------------------------------------- */
//? Écrire un programme qui demande à l'utilisateur de saisir le prix HT d'un kilo de riz, 
//? le nombre de kilos de riz achetés, et le taux de TVA. Le programme affiche le montant 
//? hors taxe, le montant tva et le montant TTC.

using namespace std;

int main(int argc, const char** argv) {

  int prix_HT, nbr_kilo_acheter;
  double tva ;

  double montant_HT ,TTC;

  cout<<"Donnez le prix Hors Taxe : "<< endl;
  cin>>prix_HT;

  cout<<"Donnez le nombre de kilo acheter : "<< endl;
  cin>>nbr_kilo_acheter;

  montant_HT = prix_HT * nbr_kilo_acheter;
  tva = 0.18 * montant_HT;
  TTC = prix_HT + tva;

  cout << "Le montant hors taxe de "<<nbr_kilo_acheter<<"kg acheter est :"<< montant_HT << endl;
  cout << "Le TVA des "<<nbr_kilo_acheter<<"kg acheter est :"<< tva << endl;
  cout << "Le TTC est de "<<TTC<<endl;

    return 0;
}
/* -------------------------------------------------------------------------- */
/*                                  MUGIWARA                                  */
/* -------------------------------------------------------------------------- */