#ifndef DEF_CHAMBRE
#define DEF_CHAMBRE

#include <string>
#include <iostream>

class Chambre {
private:
    double Numero_Chambre;
    std::string Type_Chambre;
    double Prix;
    std::string Disponibilite;
    

public:
    // Constructeurs
    Chambre();
    Chambre(double _Numero_Chambre,std::string _Type_Chambre,double _Prix,std::string _Disponibilite);

    // Setteur
    void setNumero_Chambre(double _Numero_Chambre);
    void setType_Chambre(std::string _Type_Chambre);
    void setPrix(double _Prix);
    void setDisponibilite(std::string _Disponibilite);

    // Getteur
    double getNumero_Chambre();
    std::string getType_Chambre();
    double getPrix();
    std::string getDisponibilite();

    // Méthode pour afficher les informations des chambres
    double Nombre_Chambre_Disponible();
    void display_info() const;
};

#endif
