#include "ant_colony.hpp"

ant_colony::ant_colony 
(int number_ants, mqap* mqap_){
    this->number_ants = number_ants;
    this->mqap_ = mqap_;
    this->weight_objectives = 1.0 / mqap_->get_num_objectives();
    
    // get instance size
    auto instance_size = mqap_->get_instance_size();
    
    // initialize colony
    this->colony = new int*[number_ants];
    for (int i=0; i < number_ants; i++)
        this->colony[i] = new int[instance_size];
}

ant_colony::~ant_colony (){
    auto instance_size = mqap_->get_instance_size();
    for (auto i=0u; i < instance_size; i++)
        delete[] this->colony[i];
    delete[] this->colony;
}

void ant_colony::run (){
    
}

double ant_colony::get_heuristic_information 
(int i, int j){

    return i*j;
}

double ant_colony::get_pheromone_trails () {return -1.0;}
double ant_colony::updata_pheromone_trails(){return -1.0;}