#include "reader.hpp"

mqap reader::read (string filename){
    ifstream file;
    file.open(filename);

    if (!file){
        cerr << "Unable to open file " << filename;
        exit(1); 
    }

    // get first line 
    string tmp;
    int facilities, objectives;
    int** distance_matrix;
    vector<int**> flow_matrices;

    file >> tmp >> tmp;
    file >> facilities;

    file >> tmp >> tmp;
    file >> objectives;

    cout << "facilities: " << facilities << " " << "objectives: " << objectives << endl;

    file.close();
    return mqap{};
}