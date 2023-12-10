// facture.hpp
#ifndef FACTURE_HPP
#define FACTURE_HPP

#include "reservation.hpp"

class Facture {
private:
    Reservation reservation;
    double montant;

public:
    Facture(const Reservation& reservation, double montant)
        : reservation(reservation), montant(montant) {}
};

#endif // FACTURE_HPP
