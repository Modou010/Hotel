#ifndef _DEF_GERANT
#define _DEF_GERANT
#include"Personne.hpp"
#include <string>

class Gerant : public Personne {
private:
 int identifiantGerant;

public:
    Gerant(std::string _Nom, std::string _Prenom, std::string _Adresse, std::string _Tel, int _Jour, int _Mois, int _Annee, int _identifiantGerant);

    int getIdentifiantGerant() const { return identifiantGerant; }
};
#endif