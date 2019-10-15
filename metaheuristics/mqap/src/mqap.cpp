#include "mqap.hpp"
#include <iostream>

mqap::mqap (
    int num_objectives, int instance_size, 
    vector<int**> &flow_matrices, int** distance_matrix)
{
    this->num_objectives = num_objectives;
    this->instance_size = instance_size;
    this->flow_matrices = flow_matrices;
    this->distance_matrix = distance_matrix;
    this->best_solution = new int[instance_size];
}


mqap::~mqap () 
{
    for (auto i = 0u; i < flow_matrices.size(); i++){
        for (auto j = 0; j < instance_size; j++)
            delete[] this->flow_matrices[i][j];  
        delete[] flow_matrices[i];
    } 
    
    // delete the distance matrix
    for (auto i =0; i < instance_size; i++)
        delete[] this->distance_matrix[i];
    delete[] distance_matrix;

    // delete best solution
    delete[] best_solution;
}

void mqap::set_actual_solution (int* new_solution) {this->actual_solution = new_solution;}

int* mqap::get_actual_solution (){return this->actual_solution;}

int mqap::get_actual_cost () {return this->actual_cost;}

int* mqap::get_best_solution (){return best_solution;}

int mqap::get_best_cost (){return best_cost;}

int mqap::get_instance_size (){return instance_size;}

int mqap::get_num_objectives (){return num_objectives;}

void mqap::print_flow_matrices (){
    for (int i=0; i<num_objectives; i++){
        for (int j=0; j<instance_size; j++){
            for (int k=0; k<instance_size; k++){
                cout << this->flow_matrices[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
void mqap::print_distance_matrix (){
    for (int i=0; i<instance_size; i++){
        for (int j=0; j<instance_size; j++){
            cout << this->distance_matrix[i][j] << " ";
        }
        cout << endl;
    }
}