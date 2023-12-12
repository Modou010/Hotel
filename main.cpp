#include "Chambre.hpp"
#include <iostream>
#include "Chambre.cpp"
#include"Client.hpp"
#include"Client.cpp"
#include "Reservation.hpp"
#include"Reservation.cpp"
#include"Personne.hpp"
#include"Personne.cpp"
#include "Gerant.hpp"
#include "Gerant.cpp"


int main() {
   
    std::cout << "\n"<<std::endl;
    std::cout << "***Avant reservation***"<<std::endl;
    std::cout << "\n"<<std::endl;
    // Création d'une chambre
     std::cout << "----creation d'une chambre--- "<<std::endl;
    Chambre ch1(20, "double", 10.5, "oui");
     ch1.display_info();

    std::cout << "\n";
    // Création d'un client
    std::cout << "----creation du client---- "<<std::endl;
    Client client1("Paul", "Coliot","02 rue soeur bouvier","0754054439",21,8,2000,004);
    client1.affiche();

    std::cout << "\n"<<std::endl;

    // Création d'un client
    std::cout << "----creation du Gerant---- "<<std::endl;
    Gerant gerant("Mariana", "Avestisiani","25 rue de la Fraternelle","0754054439",21,8,2000,004);
    gerant.affiche();


    std::cout << "\n"<<std::endl;
    std::cout << "***Reservation*** "<<std::endl;

    // Tentative de réservation de la chambre
    Reservation reservation(client1, ch1);

    reservation.Reserver_Chambre();

    std::cout << "\n";



    return 0;
}

    /*double chambre1[3]={12,14,-15};
    Chambre ch1;
    ch1.setNumero_Chambre(chambre2);
    ch1.display_info();
    
    //avec pointeur 
    double chambre1[3] = {101, 102, 103};  
    Chambre*ch1=new Chambre(chambre1);
    std::cout << "Chambre :" << std::endl;
    ch1->display_info();
    */
    