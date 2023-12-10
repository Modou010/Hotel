// hotel.cpp
#include "projet_hotel.hpp"
#include <iostream>

// Définition des méthodes de la classe Hotel

bool isAddressValid(const Address& address) {
    // Expression régulière pour le numéro et le nom de rue
    std::regex streetRegex("^[0-9]+\\s[a-zA-Z\\s]+$");

    // Expression régulière pour le code postal
    std::regex postalCodeRegex("^[0-9]+$");

    // Expression régulière pour la ville
    std::regex cityRegex("^[a-zA-Z\\s]+$");

    // Expression régulière pour la mention de le pays
    std::regex countryRegex("^[a-zA-Z\\s]+$");

    return std::regex_match(address.street, streetRegex) &&
           std::regex_match(address.postalCode, postalCodeRegex) &&
           std::regex_match(address.city, cityRegex) &&
           std::regex_match(address.country, countryRegex);
}

void Hotel::setNom(const std::string& nom) {
    // Vérification du format du nom (peut être étendu selon les besoins)
    if (nom.empty()) {
        std::cerr << "Erreur : Le nom de l'hotel ne peut pas être vide.\n";
    } else {
        this->nom = nom;
    }
}

std::string Hotel::getNom() const {
    return nom;
}

void Hotel::setAdresse(const Address& adresse) {
    // Vérification de l'adresse en utilisant la fonction isAddressValid
    if (isAddressValid(adresse)) {
        this->adresse = adresse;
    } else {
        std::cerr << "Erreur : Adresse invalide.\n";
    }
}

Address Hotel::getAdresse() const {
    return adresse;
}

// Getter and Setter for telephoneFixe
void Hotel::setTelephoneFixe(const std::string &telephoneFixe) {
    // Vérification du format du numéro de téléphone fixe (peut être étendu selon les besoins)
    if (telephoneFixe.size() != 9 || !std::all_of(telephoneFixe.begin(), telephoneFixe.end(), ::isdigit)) {
        throw std::invalid_argument("Erreur : Le numéro de téléphone fixe doit être composé de 9 chiffres.");
    } else {
        this->telephoneFixe = telephoneFixe;
    }
}

std::string Hotel::getTelephoneFixe() const {
    return telephoneFixe;
}

// Getter and Setter for telephonePortable
void Hotel::setTelephonePortable(const std::string &telephonePortable) {
    // Vérification du format du numéro de téléphone portable (peut être étendu selon les besoins)
    if (telephonePortable.size() != 10 || !std::all_of(telephonePortable.begin(), telephonePortable.end(), ::isdigit)) {
        throw std::invalid_argument("Erreur : Le numéro de téléphone portable doit être composé de 10 chiffres.");
    } else {
        this->telephonePortable = telephonePortable;
    }
}

std::string Hotel::getTelephonePortable() const {
    return telephonePortable;
}

void Hotel::ajouterClient(const Client& client) {
    clients.push_back(client);
}

void Hotel::ajouterReceptionniste(const Receptionniste& receptionniste) {
    receptionnistes.push_back(receptionniste);
}

void Hotel::ajouterChambre(const Chambre& chambre) {
    chambres.push_back(chambre);
}

void Hotel::effectuerReservation(const Client& client, const Chambre& chambre, const std::string& dateDebut, const std::string& dateFin) {
    Reservation reservation(client, chambre, dateDebut, dateFin);
    reservations.push_back(reservation);
    chambre.reserver();
}

void Hotel::genererFacture(const Reservation& reservation, double montant) {
    Facture facture(reservation, montant);
    factures.push_back(facture);
}

void Hotel::afficherClients() const {
    std::cout << "Liste des clients de l'hotel:\n";
    for (const auto& client : clients) {
        std::cout << "Nom: " << client.getNom() << ", Téléphone: " << client.getNumeroTelephone() << ", Adresse: " << client.getAdresse() << "\n";
    }
    std::cout << "\n";
}

void Hotel::afficherChambresDisponibles() const {
    std::cout << "Chambres disponibles:\n";
    for (const auto& chambre : chambres) {
        if (chambre.estDisponible()) {
            std::cout << "Numéro: " << chambre.getNumeroChambre() << ", Type: " << chambre.getTypeChambre() << "\n";
        }
    }
    std::cout << "\n";
}
