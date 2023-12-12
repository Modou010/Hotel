#ifndef _DEF_CLIENT
#define _DEF_CLIENT
#include"Personne.hpp"
#include <string>

class Client : public Personne {
private:
 int identifiantClient;

public:
    Client(std::string _Nom, std::string _Prenom, std::string _Adresse, std::string _Tel, int _Jour, int _Mois, int _Annee, int _identifiantClient);

    int getIdentifiantClient() const { return identifiantClient; }
};
#endif