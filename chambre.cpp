// chambre.cpp
#include "Chambre.hpp"
#include <iostream>

Chambre::Chambre() {}

Chambre::Chambre(double numeroChambre, std::string typeChambre, double prix, bool disponible)
    : numeroChambre(numeroChambre), typeChambre(typeChambre), prix(prix), disponible(disponible) {

    // Vérification et affectation du numéro de chambre
    double nombreChambre = 50;
    if (numeroChambre >= 0 && numeroChambre <= nombreChambre) {
        this->numeroChambre = numeroChambre; // Stocker les numéros de chambre valides
    } else {
        this->numeroChambre = -1; // Marquer les chambres invalides
    }
    // Vérification et affectation du type de chambre
    if (typeChambre == "single" || typeChambre == "double" || typeChambre == "president") {
        this->typeChambre = typeChambre;
    } else {
        this->typeChambre = ""; // Marquer les types de chambre invalides
    }
    // Vérification et affectation du prix
    if (prix >= 0) {
        this->prix = prix;
    } else {
        std::cout << "Le Prix ne peut pas être négatif" << std::endl;
        this->prix = -1; // Marquer les prix invalides
    }
    // Vérification et affectation de la disponibilité
    if (disponible || !disponible) {
        this->disponible = disponible;
    } else {
        this->disponible = false; // Marquer la disponibilité comme faux en cas de valeur invalide
    }
}

//setteurs pour les numero de chambre 
void Chambre::setNumeroChambre(double numeroChambre) {
    this->numeroChambre = (numeroChambre >= 0) ? numeroChambre : -1;
}
//setteur pour le type de chambre
void Chambre::setTypeChambre(std::string typeChambre) {
    this->typeChambre = (typeChambre == "single" || typeChambre == "double" || typeChambre == "president") ? typeChambre : "";
    setPrixPartirType(); // mise a jour prix
}
//setteur pour le prix
void Chambre::setPrixPartirType() {
    if (typeChambre == "single") {
        prix = 100;
    } else if (typeChambre == "double") {
        prix = 200;
    } else if (typeChambre == "president") {
        prix = 300;
    } else {
        std::cout << "Type de chambre non reconnu. Le prix n'a pas été défini." << std::endl;
        prix = -1; // Indicate undefined price for unknown room type
    }
}
//setteur pour la disponibilite
void Chambre::setDisponible(bool disponible) {
    this->disponible = disponible;
}
//getteur pour le numero de chambre
double Chambre::getNumeroChambre() const {
    return numeroChambre;
};
//getteur pour le type de chambre 
std::string Chambre::getTypeChambre() const{
    return typeChambre;
}
//getteur pour le prix
double Chambre::getPrix() const{
    return prix;
}
//getteur disponiblite
bool Chambre::estDisponible() const {
    return disponible;
}

// Méthodes pour gérer la disponibilité
void Chambre::reserver() {
    if (disponible) {
        disponible = false;
        std::cout << "La chambre a été réservée." << std::endl;
    } else {
        std::cout << "La chambre est déjà occupée." << std::endl;
    }
}
void Chambre::liberer() {
    if (!disponible) {
        disponible = true;
        std::cout << "La chambre a été libérée." << std::endl;
    } else {
        std::cout << "La chambre est déjà disponible." << std::endl;
    }
}

// mettre prix par defaut a partir de type de chambre



//displayinfo
void Chambre::display_info() const {
    if (numeroChambre >= 0) {
        std::cout << "Chambre numéro " << numeroChambre << std::endl;
    } else {
        std::cout << "ERREUR numéro Chambre invalide" << std::endl;
    }

    if (typeChambre == "single" || typeChambre == "double" || typeChambre == "president") {
        std::cout << "Le type de chambre est " << typeChambre << std::endl;
    } else {
        std::cout << "Le type de chambre doit être Single, Double ou President" << std::endl;
    }

    if (prix >= 0) {
        std::cout << "Le prix est " << prix << std::endl;
    } else {
        std::cout << "Le Prix ne peut pas être négatif" << std::endl;
    }

    std::cout << "Disponibilite : " << (estDisponible() ? "Oui" : "Non") << std::endl;
}