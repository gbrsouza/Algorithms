#include <iostream>
#include "reader.hpp"

using namespace std;

int main ( ){

    auto p = reader::read("instances/Knowles/KC10-2fl-1rl.dat");
    p.print_distance_matrix();
    cout << endl;
    p.print_flow_matrices();
    return 0;
}