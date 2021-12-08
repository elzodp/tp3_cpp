#include<iostream>
#include"include/probleme.h"
#include"include/equation.h"
#include"include/ITimeDiscretization.h"
#include <gtest/gtest.h>

/*TEST(UnitTest, TestProb)
{
    EXPECT_EQ(1, 1);
}*/




/*TEST(PrintTest,solve){
	
	
	Equation* m_eq;
    double tmp=90.
    m_eq->compute(tmp);
	Problem* a;
	a->solve();
	
	double res=82.81;
	
	ASSERT_TRUE(res) m_eq.compute(tmp);
}*/

TEST(UnitaryTest,ProblemTest){
    UniformTimeDiscretization m_discretiz(0, 1, 10);
    Equation t;
    //Problem a;
	//a.solve();
	
    EXPECT_EQ(0.1, m_discretiz.get_pas());
}

TEST(MainFunctionTest,EquationTest){
  // construction et test d'une instance de Equation
  Equation m_eq;
  m_eq.compute(0.0);
  EXPECT_EQ(0.0,m_eq.compute(0.0) );
}


TEST(MainFunctionTest,ITimeDiscretizationTest){
  // construction et test d'une instance de Equation
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

