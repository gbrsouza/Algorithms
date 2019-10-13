#ifndef _MQAP_H_
#define _MQAP_H_

#include <vector>
using std::vector;

class mqap {

private:
    int num_objectives;           // number of objectives
    int instance_size;            // instance size
    
    int* best_solution;           // optimal solution
    vector<int**> flow_matrices;  // flow matrices
    int** distance_matrix;        // distance matrix
    
    int best_cost;                // optimal cost
 
    int* actual_solution;         // actual solution        
    int actual_cost;              // actual cost

    /**
     * @brief calculate the cost of actual solution
     * @return int the cost of actual solution
     */
    int calcule_cost_of_solution ();

public:
    
    /**
     * @brief Construct a new mqap object
     * 
     * @param num_objectives   number of objectives
     * @param instance_size    instance size
     * @param flow_matrices    flow matrices
     * @param distance_matrix  distance matrix
     */
    mqap (
        int num_objectives, int instance_size, 
        vector<int**> flow_matrix, int** distance_matrix
    );

    mqap () {}

    /**
     * @brief Destroy the mqap object
     */
    ~mqap ();

    void set_actual_solution (int* new_solution);
    int* get_actual_solution ();

    int get_actual_cost ();

    int* get_best_solution ();
    int get_best_cost ();

    int get_instance_size ();
    int get_num_objectives ();
};

#endif