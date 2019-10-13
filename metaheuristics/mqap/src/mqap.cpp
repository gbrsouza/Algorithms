#include "mqap.hpp"

mqap::mqap (
    int num_objectives, int instance_size, 
    vector<int**> flow_matrix, int** distance_matrix)
{
    this->num_objectives = num_objectives;
    this->instance_size = instance_size;
    this->flow_matrices = flow_matrices;
    this->distance_matrix = distance_matrix;
}

mqap::~mqap () 
{
    // delete all flow matrices
    // for (auto i = 0u; i < flow_matrices.size(); i++)
    //     for (auto j = 0; j < instance_size; j++)
    //         delete[] flow_matrices[i][j];
    
    // // delete the distance matrix
    // for (auto i =0; i < instance_size; i++)
    //     delete[] distance_matrix[i];

    // // delete best solution
    // delete[] best_solution;
}

void mqap::set_actual_solution (int* new_solution) {this->actual_solution = new_solution;}

int* mqap::get_actual_solution (){return this->actual_solution;}

int mqap::get_actual_cost () {return this->actual_cost;}

int* mqap::get_best_solution (){return best_solution;}

int mqap::get_best_cost (){return best_cost;}

int mqap::get_instance_size (){return instance_size;}

int mqap::get_num_objectives (){return num_objectives;}