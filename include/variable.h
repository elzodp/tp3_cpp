#pragma once
#include "ITimeDiscretization.h"
#include <iostream>
#include <vector>




class Variable {
    public:
    Variable (); // constructeur vide
  	//Variable (size_t N); // constructeur créant un vecteur de taille N et rempli de zéros
    Variable( ITimeDiscretization *t_n);
  	//Variable (const Variable &y_n); // constructeur par recopie
    //~Variable()=default; // destructeur par défaut


   // double & operator() (double t_n);      // Accès à la référence 
    double & operator() (double const & it_n) ; // Accès à la valeur (recopie)

    size_t size() const;// methode qui renvoie la taille 

    private:

    size_t n;
  
    std::vector<double> y_n;
    ITimeDiscretization *iter_n;
};