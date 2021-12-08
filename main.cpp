#include "equation.h"
#include "ITimeDiscretization.h"
#include "probleme.h"
#include"variable.h"
#include <iostream>


int main() {

  Equation eq;
  const double debut = 0, fin = 10;
  const size_t nbr_pas = 10;
  
  ITimeDiscretization *td = new UniformTimeDiscretization(debut, fin, nbr_pas);

  Problem p(eq, td);
  p.solve();

  delete td;
  return 0;
}
