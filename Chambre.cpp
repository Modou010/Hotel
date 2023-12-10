#include "Chambre.hpp"
#include <iostream>

Chambre::Chambre(){}
Chambre::Chambre(double _Numero_Chambre,std::string _Type_Chambre,double _Prix,std::string _Disponibilite) {
        double Nombre_Chambre=50;
        if ((_Numero_Chambre>=0)&&(_Numero_Chambre<=Nombre_Chambre)){
        //if (_Numero_Chambre >= 0) {
            Numero_Chambre = _Numero_Chambre; // Stocker les numéros de chambre valides
        } else {
            Numero_Chambre= -1; // Marquer les chambres invalides
        }
    
    //type de chambre
    if ((_Type_Chambre!="single")&&(_Type_Chambre!="double")&&(_Type_Chambre!="president")){
        Type_Chambre="";
    }
    else{
        Type_Chambre=_Type_Chambre;
    }
    //Prix
    if(_Prix>=0){
        Prix=_Prix;
    }else{
        std::cout<<"le Prix ne peut pas etre negatif"<<std::endl;
        Prix=-1;
    }
    //disponibilite
   
    if ((_Disponibilite!="oui")&&(_Disponibilite!="non")){
        Disponibilite="";
        
    }
    else{
        Disponibilite=_Disponibilite;
        
    }
   
}

//setteurs pour les numero de chambre 
void Chambre:: setNumero_Chambre(double _Numero_Chambre){
        if (_Numero_Chambre >= 0) {
            Numero_Chambre = _Numero_Chambre; // Stocker les numéros de chambre valides
        } else {
            Numero_Chambre = -1; // Marquer les chambres invalides
        }
    }

    
    //setteur pour le type de chambre
void Chambre::setType_Chambre(std::string _Type_Chambre){
    if ((_Type_Chambre!="single")&&(_Type_Chambre!="double")&&(_Type_Chambre!="president")){
       Type_Chambre="";
    }
    else{
        Type_Chambre=_Type_Chambre;
    }
}

//setteur pour le prix
void Chambre::setPrix(double _Prix){
    if(_Prix>=0){
        Prix=_Prix;
    }else{
        
        Prix=-1;
    }
}
//setteur pour la disponibilite
void Chambre::setDisponibilite(std::string _Disponibilite){
    if ((_Disponibilite!="oui")&&(_Disponibilite!="non")){
        Disponibilite="";
        
    }
    else{
        Disponibilite=_Disponibilite;
        
    }
}
//getteur pour le numero de chambre
double Chambre::getNumero_Chambre(){
    return Numero_Chambre;
};
//getteur pour le type de chambre 
std::string Chambre::getType_Chambre(){
    return Type_Chambre;
}
//getteur pour le prix
double Chambre::getPrix(){
    return Prix;
}
//getteur disponiblite
 std::string Chambre::getDisponibilite(){
    return Disponibilite;
 }
//methodes

// nombre de chambre disponible 
double Chambre::Nombre_Chambre_Disponible(){}


void Chambre::display_info() const {
        if (Numero_Chambre>= 0) {
            std::cout << "Chambre numero " << Numero_Chambre << std::endl;
        } else {
            std::cout << "ERREUR numero Chambre invalide" << std::endl;
        }
    
   if ((Type_Chambre!="single")&&(Type_Chambre!="double")&&(Type_Chambre!="president")){
        std::cout<<"le type de chambre doit etre **Single Double ou President **"<<std::endl;
    }
    else{
        std::cout<<"le type de chambre est "<<Type_Chambre<<std::endl;
    }
    if(Prix>=0){
        std::cout<<"le prix est "<<Prix<<std::endl;
    }else{
        std::cout<<"le Prix ne peut pas etre negatif"<<std::endl;
       
    }
    if ((Disponibilite!="oui")&&(Disponibilite!="non")){
       std::cout<<"la disponibilite invalide elle  doit etre Oui ou Non"<<std::endl;
         }
    else{
        std::cout<<"Disponibilte : "<<Disponibilite<<std::endl; 
}
}