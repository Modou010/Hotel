#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <iostream>
#include <string>

class Personne {
protected:
    std::string Nom;
    std::string Prenom;
    std::string Adresse;
    std::string Tel;
    int Jour_naissance;
    int Mois_naissance;
    int Annee_naissance;

public:
    // setters
    void SetNom( std::string _Nom);
    void SetPrenom( std::string _Prenom);
    void SetAdresse( std::string _Adresse);
    void SetTel( std::string _Tel);
    void setJourNaissance(int _Jour);
    void setMoisNaissance(int _Mois);
    void setAnneeNaissance(int _Annee);

    // constructeur
    Personne( std::string _Nom,  std::string _Prenom, std::string _Adresse, std::string _Tel, int _Jour, int _Mois, int _Annee);

    // getters
    std::string getNom()  { return Nom; }
    std::string getPrenom()  { return Prenom; }
    std::string getAdresse()  { return Adresse; }
    std::string getTel()  { return Tel; }
    int getJourNaissance()  { return Jour_naissance; }
    int getMoisNaissance() { return Mois_naissance; }
    int getAnneeNaissance()  { return Annee_naissance; }

    void affiche();
};

#endif
