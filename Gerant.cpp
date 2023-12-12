
#include <iostream>
#include <string>
#include"Personne.hpp"
#include "Gerant.hpp"
Gerant::Gerant(std::string _Nom, std::string _Prenom, std::string _Adresse, std::string _Tel, int _Jour, int _Mois, int _Annee, int _identifiantGerant)
    : Personne(_Nom, _Prenom, _Adresse, _Tel, _Jour, _Mois, _Annee), identifiantGerant(_identifiantGerant) {
    // Implémentation du constructeur
}
 