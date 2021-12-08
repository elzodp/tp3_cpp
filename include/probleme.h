#pragma once
#include "equation.h"
#include "ITimeDiscretization.h"
#include <iostream>

class Problem {
public:
  Problem()=default;
  Problem(Equation const &eq, ITimeDiscretization *td);

  virtual void solve();

private:
  Equation m_eq;
  ITimeDiscretization *m_discretiz;
};
