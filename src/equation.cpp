#include "../include/equation.h"
#include<iostream>


/*double Equation::compute(double t) {
  // Implementer une equation

  // Return temporaire
  return t * t;
}
*/
 
void Equation::compute_initial_condition(double initial_time,Variable & y){ 
  
  y(initial_time)=initial_time;
}

void Equation::compute(double tmp_courant,size_t pas_tmp,Variable &y_n){
  double y=(y_n(tmp_courant) + pas_tmp*tmp_courant);
  double yn_1=y;
}

