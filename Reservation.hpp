#ifndef RESERVATION_HPP
#define RESERVATION_HPP

#include "Chambre.hpp"
#include "Client.hpp"

class Reservation {
private:
    Client clients;
    Chambre chambres;

public:
    Reservation(Client& _clients, Chambre& _chambres);
    void Reserver_Chambre();
    void display_info_reservation();
};

#endif // RESERVATION_HPP
