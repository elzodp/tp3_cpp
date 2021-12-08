#pragma once
#include"../include/variable.h"

#include <iostream>

class Equation
{

public:
    Equation() = default;
    
    virtual ~Equation() = default;
    
    //virtual double compute(double tmp);
    virtual void compute(double tmp_courant,size_t pas_tmp,Variable &y_n);
    virtual void  compute_initial_condition(double initial_time,Variable &y_n);
private:
    double m_i = 0.0;
    double tmp_courant=0;
    size_t pas_tmp=0;
    Variable y_n;
};
