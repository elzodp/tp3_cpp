#include "../include/ITimeDiscretization.h"
#include<iostream>


ITimeDiscretization::ITimeDiscretization(double it, double ft)
    : initial_time(it), final_time(ft) {}

double ITimeDiscretization::get_initial_time() const { return initial_time; }

double ITimeDiscretization::get_final_time() const { return final_time; }

UniformTimeDiscretization::UniformTimeDiscretization(double it, double ft,
                                                     size_t nombre_pas)
    : ITimeDiscretization(it, ft), nbr_pas(nombre_pas) {}


double UniformTimeDiscretization::get_pas() const {
  return (final_time - initial_time) / nbr_pas;
}

size_t UniformTimeDiscretization::get_nb_points() const {
  return nbr_pas;
}

size_t UniformTimeDiscretization::iteration(double t) const { 

  size_t N_i = size_t(t - get_initial_time()) / get_pas();

  return N_i;
}
