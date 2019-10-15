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

    getline(file, tmp);
    istringstream iss(tmp);

    iss >> tmp >> tmp;
    iss >> facilities;

    iss >> tmp >> tmp;
    iss >> objectives;

    // create distance matrix
    int** distance_matrix = new int*[facilities];
    for (int i=0; i < facilities; i++)
        distance_matrix[i] = new int[facilities];

    // read distance matrix
    for (int i=0; i < facilities; i++)
        for(int j=0; j < facilities; j++)
            file >> distance_matrix[i][j];

    //create all flow matrices
    vector<int**> flow_matrices;
    for (int i=0; i < objectives; i++){
        int** flow_matrix = new int*[facilities];
        for (int j=0; j < facilities; j++)
            flow_matrix[j] = new int[facilities];
        flow_matrices.push_back(flow_matrix);
    }

    // read all flow matrices
    for (int i=0; i < objectives; i++){
        for (int j=0; j < facilities; j++)
            for (int k=0; k < facilities; k++)
                file >> flow_matrices[i][j][k];
    }

    file.close();
    return mqap{objectives, facilities, flow_matrices, distance_matrix};
}