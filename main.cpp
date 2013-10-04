// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    04.10.2013 21:10:08 CEST
// File:    main.cpp

#include <iostream>

///  \brief super useful printing fct
///  @param t is the stuff for printing
///  
///  some more awesome facts about this useful fct
template<typename T>
inline void print(T const & t) {
    std::cout << t << std::endl;
}

///  \brief power_2 fct
///  @param x is the input
///  
///  just squares the x
inline int power_2(int const & x) {
    return x*x;
}

///  \brief THE MAIN EVENT
int main(int argc, char* argv[]) {
    
    print(power_2(2));
    
    return 0;
}
