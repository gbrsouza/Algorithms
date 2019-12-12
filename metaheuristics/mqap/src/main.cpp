#include <iostream>
#include "reader.hpp"

using namespace std;

int main ( ){

    auto p = reader::read("instances/Knowles/KC10-2fl-1rl.dat");
    p.print_distance_matrix();
    cout << endl;
    p.print_flow_matrices();

    auto ac_sol = p.get_actual_solution();
    auto bs_sol = p.get_best_solution();
    cout << "actual solution: ";
    for (int i=0; i < p.get_instance_size(); i++)
        cout << ac_sol[i] << " ";
    cout << endl;
    cout << "actual cost: " << p.get_actual_cost() << endl;
    
    cout << "best solution: ";
    for (int i=0; i < p.get_instance_size(); i++)
        cout << bs_sol[i] << " ";
    cout << endl;
    cout << "best cost: " << p.get_actual_cost() << endl;

    return 0;
}