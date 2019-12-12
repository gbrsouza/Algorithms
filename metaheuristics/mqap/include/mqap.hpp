#ifndef _MQAP_H_
#define _MQAP_H_

#include <vector>
#include <iostream>

using namespace std;
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
        vector<int**> &flow_matrices, int** distance_matrix
    );

    mqap () {}

    /**
     * @brief Destroy the mqap object
     */
    ~mqap ();

    /**
     * @brief calcule the distance cost of i in j for a 
     * objective.
     * 
     * @param i   the facility 
     * @param j   the location
     * @param obj the objective 
     * @return int return the distance cost
     */
    int flow_cost (int i, int j, int obj);

    /**
     * @brief calculate a cost of a preview solution 
     * 
     * @param solution the preview solution
     * @param obj      the objective for calculate cost
     * @param size     the size of preview solution
     * @return int     
     */
    int cost_preview_solution (int* solution, int size, int obj);

    int solution_cost (int* solution);

    void set_actual_solution (int* new_solution);
    int* get_actual_solution ();

    int get_actual_cost ();

    int* get_best_solution ();
    int get_best_cost ();

    int get_instance_size ();
    int get_num_objectives ();

    void print_flow_matrices ();
    void print_distance_matrix ();
};

#endif