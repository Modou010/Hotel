// chambre.hpp
#ifndef DEF_CHAMBRE
#define DEF_CHAMBRE

#include <string>
#include <iostream>

class Chambre {
private:
    double numeroChambre;
    std::string typeChambre;
    double prix;
    bool disponible;
    

public:
    // Constructeurs
    Chambre();
    Chambre(double numeroChambre, std::string typeChambre, double prix, bool disponible);

    // Setteur
    void setNumeroChambre(double numeroChambre);
    void setTypeChambre(std::string typeChambre);
    void setDisponible(bool disponible);
    void setPrixPartirType();

    // Getteur
    double getNumeroChambre() const;
    std::string getTypeChambre() const;
    double getPrix() const;
    bool estDisponible() const;

    // Méthodes pour gérer la disponibilité
    void reserver();
    void liberer();


    // Méthode pour afficher les informations des chambres
    void display_info() const;
};

#endif
