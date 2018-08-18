cmake_minimum_required(VERSION 3.12)
project(BuilderPresentation)

set(CMAKE_CXX_STANDARD 14)

add_executable(BuilderPresentation main.cpp builders/builder.h builders/PrimeNumbers.cpp builders/PrimeNumbers.h builders/TwinsPrimeNumbers.cpp builders/TwinsPrimeNumbers.h builders/PrimeQuadruplet.cpp builders/PrimeQuadruplet.h builders/FermatNumbers.cpp builders/FermatNumbers.h Director.cpp Director.h)