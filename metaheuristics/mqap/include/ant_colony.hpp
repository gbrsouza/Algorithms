#ifndef _ANT_COLONY_H_
#define _ANT_COLONY_H_

#include "mqap.hpp"

class ant_colony {
private:
    int number_ants;
    int** colony;  // an array of ants
    mqap* mqap_;   // instance of mqap 
    double weight_objectives;
    double pheromone_trails;

    double get_heuristic_information (int i, int j);
    double get_pheromone_trails ();
    double updata_pheromone_trails();

public:
    ant_colony (int number_ants, mqap* mqap_);
    ~ant_colony ();
    void run ();

}; 

#endif
