//
//Created by Dolev Hindy on 26/06/2020.
//
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("100 tests") {
    RealVariable x;
            CHECK_NOTHROW(2*x  == 1);
            CHECK_NOTHROW(x-2  == 1);
            CHECK_NOTHROW(x+3  == 1);
            CHECK_NOTHROW(x/3  == 1);
            CHECK_NOTHROW(2*x + 1  == 1);
            CHECK_NOTHROW(x-2  == 1);
            CHECK_NOTHROW(x+3 + 1  == 1);
            CHECK_NOTHROW(x/3 + 1  == 1);
            CHECK_NOTHROW(2*x  == x);
            CHECK_NOTHROW(x-2  == x);
            CHECK_NOTHROW(x+3  == x);
            CHECK_NOTHROW(x/3  == x);
            CHECK_NOTHROW(2*x + 1  == x);
            CHECK_NOTHROW(x-2  == x);
            CHECK_NOTHROW(x+3 + 1  == x);
            CHECK_NOTHROW(x/3 + 1  == x);

    solver::ComplexVariable u;

            CHECK_NOTHROW(solve(2*u  == 1));
            CHECK_NOTHROW(solve(u-2  == 1));
            CHECK_NOTHROW(solve(u+3  == 1));
            CHECK_NOTHROW(solve(u/3  == 1));
            CHECK_NOTHROW(solve(2*u + 1  == 1));
            CHECK_NOTHROW(solve(u-2  == 1));
            CHECK_NOTHROW(solve(u+3 + 1  == 1));
            CHECK_NOTHROW(solve(u/3 + 1  == 1));
            CHECK_NOTHROW(solve(2*u  == u));
            CHECK_NOTHROW(solve(u-2  == u));
            CHECK_NOTHROW(solve(u+3  == u));
            CHECK_NOTHROW(solve(u/3  == u));
            CHECK_NOTHROW(solve(2*u + 1  == u));
            CHECK_NOTHROW(solve(u-2  == u));
            CHECK_NOTHROW(solve(u+3 + 1  == u));
            CHECK_NOTHROW(solve(u/3 + 1  == u));

} // 40

TEST_CASE("real solving"){
    solver::RealVariable x;

            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x == 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
            CHECK(solve(2*x == 2) == 1);
            CHECK(solve(3*x == 3) == 1);
            CHECK(solve(4*x== 2) == 0.5);
}

