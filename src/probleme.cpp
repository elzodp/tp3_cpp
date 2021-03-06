#include "../include/probleme.h"
#include <iostream>

Problem::Problem(Equation const &eq, ITimeDiscretization *td)
    : m_eq(eq), m_discretiz(td)
{

  // Erreur !
  if (td == nullptr)
    exit(1);
}

void Problem::solve()
{
  double tmp_i=m_discretiz->get_initial_time() ;
  size_t N_i=iteration(double t) const;
  Variable y_init[N_i];
  double pas_temp;

  m_eq.compute_initial_condition(tmp_i, y_init);
  printf("--- Solve problem ---\n");
  for (size_t step = 0; step < m_discretiz->get_nb_points(); step++)
  {
    double tmp = m_discretiz->get_pas() * step;
    Variable y[N_i];
     
     m_eq.compute(tmp,pas_temp,y);
  }
}