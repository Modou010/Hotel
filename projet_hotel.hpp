// hotel.hpp
#ifndef HOTEL_HPP
#define HOTEL_HPP

#include <iostream>
#include <vector>
#include <regex>
#include "personne.hpp"
#include "receptioniste.hpp"
#include "chambre.hpp"
#include "reservation.hpp"
#include "facture.hpp"

struct Adresse {
    std::string rue;
    std::string codePostal;
    std::string ville;
    std::string pays;
};

bool isAdresseValid(const Adresse& adresse);

class Hotel {
private:
    std::string nom;
    Adresse adresse;
    std::string telephoneFixe;
    std::string telephonePortable;

    std::vector<Client*> clients;
    std::vector<Receptionniste*> receptionnistes;
    std::vector<Chambre*> chambres;
    std::vector<Reservation*> reservations;
    std::vector<Facture*> factures; 


public:
    // Méthodes pour la gestion de l'hôtel
    void setNom(const std::string& nom);
    std::string getNom() const;

    void setAdresse(const Adresse& adresse);
    Adresse getAdresse() const;

    void setTelephoneFixe(const std::string& telephoneFixe);
    std::string getTelephoneFixe() const;

    void setTelephonePortable(const std::string& telephonePortable);
    std::string getTelephonePortable() const;

    void ajouterClient(Client* client);
    void afficherClients() const;

    void ajouterReceptionniste(Receptionniste* receptionniste);
    Reservation effectuerReservation(const Client& client, Chambre& chambre, const std::string& dateDebut, const std::string& dateFin);

    void genererFacture(const Reservation& reservation, double montant);
    void afficherFactures() const;

    void ajouterChambre(Chambre* chambre);
    int Hotel::nombreChambresDisponibles() const;
    std::vector<Chambre> getChambresDisponibles() const;

    
};

#endif // HOTEL_HPP
