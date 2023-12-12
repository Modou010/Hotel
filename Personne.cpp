#include "Personne.hpp"


    Personne::Personne( std::string _Nom,  std::string _Prenom,  std::string _Adresse, 
     std::string _Tel, int _Jour, int _Mois, int _Annee)
 {
   //nom
   if (_Nom.size()>=2 && _Nom.size()<=20){
        Nom=_Nom;
    }else{
        std::cout<<"le nom est invalide"<<std::endl;

    }
  //prenom
  if (_Prenom.size()>=2 && _Prenom.size()<=20){
        Prenom=_Prenom;
    }else{
        std::cout<<"le Prenom est invalide"<<std::endl;

    }
    //adreesse 
     if (_Adresse.length() <= 40) {
        Adresse = _Adresse;
    } else {
        Adresse="";
    }
    //Tel
    if (_Tel.length() == 10) {
        Tel = _Tel;
    } else {
        Tel="";
    }
    //jour
     if ((_Jour<1)&&(_Jour>31)){
            Jour_naissance=0;
            std::cout<<"jour de naissance invalide";
        }else{
            Jour_naissance=_Jour;
        }
//Mois
if((_Mois<1)&&(_Mois>12)){
            Mois_naissance=0;
        }else{
            Mois_naissance=_Mois;
        }
    //annee
    if(_Annee<1900){
            Annee_naissance=0;
        }else{
            Annee_naissance=_Annee;
        }
}

//setteur nom
void Personne::SetNom( std::string _Nom) {
    if (_Nom.size()>=2 && _Nom.size()<=20){
        Nom=_Nom;
    }else{
        Nom="";

    }
}
//setteur prenom
void Personne::SetPrenom( std::string _Prenom) {
    if (_Prenom.size()>=2 && _Prenom.size()<=20){
        Prenom=_Prenom;
    }else{
        Prenom="";

    }}
//setteur adresse
void Personne::SetAdresse( std::string _Adresse) {
    if (_Adresse.length() <= 40) {
        Adresse = _Adresse;
    } else {
        std::cout << "erreur: l'adresse ne peut pas dépasser 40 caractères." << std::endl;
        Adresse="ERREUR";
    }
}
//setteur tel
void Personne::SetTel( std::string _Tel) {
    if (_Tel.length() == 10) {
        Tel = _Tel;
    } else {
        std::cout << "erreur: le numéro de téléphone doit avoir 10 chiffres." << std::endl;
        Tel="ERREUR";
    }
}
//setteur jour
    void Personne::setJourNaissance(int _Jour){
        if ((_Jour<1)&&(_Jour>31)){
            Jour_naissance=0;
            std::cout<<"le jour de naissance n'est pas valide"<<std::endl;
        }else{
            Jour_naissance=_Jour;
        }
    }

//setter mois
    void Personne::setMoisNaissance(int _Mois){
        if((_Mois<1)&&(_Mois>12)){
            Mois_naissance=0;
         std::cout<<"le Mois de naissance n'est pas valide"<<std::endl;

        }else{
            Mois_naissance=_Mois;
        }
        
    }

//setteur annee
    void Personne::setAnneeNaissance(int _Annee){
        if(_Annee<1900){
            Annee_naissance=0;
            std::cout<<"l'Annee de naissance n'est pas valide"<<std::endl;

        }else{
            Annee_naissance=_Annee;
        }
    }


void Personne::affiche() {
    if (Nom.size()>=2 && Nom.size()<=20){
      std::cout<<"Nom : "<< Nom <<std::endl;
    }else{
        std::cout<<"le nom est invalide"<<std::endl;
    }
     if (Prenom.size()>=2 && Prenom.size()<=20){
      std::cout<<"Prenom : "<<Prenom <<std::endl;
    }else{
        std::cout<<"le Prenom est invalide"<<std::endl;
    }
     if (Adresse.length() <= 40) {
    std::cout << "Adresse : " << Adresse << std::endl;
     }else{
        std::cout<<" adresse invalide"<<std::endl;
     }
     if (Tel.length() == 10) {
          std::cout << "telephone: " << Tel << std::endl;

    } else {
            std::cout << "telephone invalide: "<<std::endl;
    }
     if (Jour_naissance < 1 || Jour_naissance > 31 || Mois_naissance < 1 || Mois_naissance > 12 || Annee_naissance < 1900) {
        std::cout << "Date de naissance invalide" << std::endl;
    }else{
        //std::cout << "Date de naissance invalide: "<<std::endl;
        std::cout << "La date de naissance : " <<Jour_naissance << " / " << Mois_naissance<< " / " <<Annee_naissance << std::endl;

    }

}
