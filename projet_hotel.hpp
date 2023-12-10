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

struct Address {
    std::string street;
    std::string postalCode;
    std::string city;
    std::string country;
};

bool isAddressValid(const Address& address);

class Hotel {
private:
    std::string nom;
    Address adresse;
    std::string telephoneFixe;
    std::string telephonePortable;

    std::vector<Client> clients;
    std::vector<Receptionniste> receptionnistes;
    std::vector<Chambre> chambres;
    std::vector<Reservation> reservations;
    std::vector<Facture> factures;

public:
    // Méthodes pour la gestion de l'hôtel
    void setNom(const std::string& nom);
    std::string getNom() const;

    void setAdresse(const Address& adresse);
    Address getAdresse() const;

    void setTelephoneFixe(const std::string& telephoneFixe);
    std::string getTelephoneFixe() const;

    void setTelephonePortable(const std::string& telephonePortable);
    std::string getTelephonePortable() const;

    void ajouterClient(const Client& client);
    void ajouterReceptionniste(const Receptionniste& receptionniste);
    void ajouterChambre(const Chambre& chambre);
    void effectuerReservation(const Client& client, const Chambre& chambre, const std::string& dateDebut, const std::string& dateFin);
    void genererFacture(const Reservation& reservation, double montant);

    void afficherClients() const;
    void afficherChambresDisponibles() const;
};

#endif // HOTEL_HPP
