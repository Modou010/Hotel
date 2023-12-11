#include "Reservation.hpp"
#include"Client.hpp"
#include "Chambre.hpp"

#include <iostream>

Reservation::Reservation(Client& _clients, Chambre& _chambres) : clients(_clients), chambres(_chambres) {}

void Reservation::Reserver_Chambre() {
    if (chambres.getDisponibilite() == "oui") {
        std::cout << "La chambre est disponible. Reservation  pour " << clients.getNom() << std::endl;
        chambres.setDisponibilite("non");
        // Autres actions de réservation...
    } else {
        std::cout << "La chambre n'est pas disponible pour " << clients.getNom() << ". Reservation pour une autre chambre." << std::endl;
        // Autres actions si la chambre n'est pas disponible...
    }
}
void Reservation::display_info_reservation(){
     
    std::cout<<"nom client "<<clients.getNom()<<std::endl;
    std::cout<<"numero de chambre "<<chambres.getNumero_Chambre()<<std::endl;
    std::cout<<"type de chambre "<<chambres.getType_Chambre()<<std::endl;
    std::cout <<"prix de la chambre "<<chambres.getPrix()<<std::endl;
     std::cout<< "dispo de la chambre "<<chambres.getDisponibilite()<<std::endl;
     }
    
