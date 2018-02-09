cmake_minimum_required(VERSION 3.9)
project(s929913_tax_calculator)

set(CMAKE_CXX_STANDARD 11)

add_executable(s929913_tax_calculator main.cpp toptax.h socialtax.h generaltax.h fortunetax.h toptax.cpp socialtax.cpp generaltax.cpp fortunetax.cpp TaxCalculator.cpp TaxCalculator.h TaxInformation.cpp TaxInformation.h)