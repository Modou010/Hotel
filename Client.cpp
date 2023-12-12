#include "Client.hpp"
#include <iostream>
#include <string>
#include"Personne.hpp"
#include "Client.hpp"

Client::Client(std::string _Nom, std::string _Prenom, std::string _Adresse, std::string _Tel, int _Jour, int _Mois, int _Annee, int _identifiantClient)
    : Personne(_Nom, _Prenom, _Adresse, _Tel, _Jour, _Mois, _Annee), identifiantClient(_identifiantClient) {
    // Implémentation du constructeur
}
 