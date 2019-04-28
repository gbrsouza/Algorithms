#ifndef _MQAP_H_
#define _MQAP_H_

/**
 * @file   mQAP.h
 * @author Gabriel Araújo de Souza (gabriel_feg@hotmail.com)
 * @brief  A interface for the multi-objective Quadratic
 *         Assignment Problem
 * @version 0.1
 * @date 2019-04-28
 * 
 * @copyright Copyright (c) 2019
 */

#include <memory> //<! std::unique_ptr
#include <vector> //<! std::vector
#include <string> //<! std::string

/**
 * @brief represents a matrix for the problem.
 */
typedef struct Matrix {
    std::shared_ptr<std::shared_ptr<int>> matrix; 
}Matrix;

/**
 * @brief This is a class for the multi-objective Quadratic
 * Assignment Problem. 
 */
class mQAP {

private:
    
    int numberOfObjectives;            //<! number of objectives    
    int dimension;                     //<! dimension problem (number of facilities/locations)
    std::shared_ptr<int> bestSolution; //<! the best solution for the problem
    std::vector<Matrix> flowMatrices;  //<! all flow matrices
    Matrix distanceMatrix;             //<! The distance matrix of problem
    std::string problemName;           //<! The problem name

public:

    /**
     * @brief Destroy the mQAP object
     */
    ~mQAP();

    /**
     * @brief Construct a new mQAP object
     * 
     * @param numberOfObjectives   the number of objectives 
     * @param dimension            the dimension of problem
     * @param bestSolution         the best solution for the problem
     * @param flowMatrices         the flow matrices for the problem
     * @param distanceMatrix       the distance matrix for the problem
     */
    mQAP(int numberOfObjectives, int dimension,
         std::shared_ptr<int> bestSolution,
         std::vector<Matrix> flowMatrices,
         Matrix distanceMatrix)

         : numberOfObjectives{numberOfObjectives},
           dimension{dimension},
           bestSolution{bestSolution},
           flowMatrices{flowMatrices},
           distanceMatrix{distanceMatrix}
         
        {}
    
     /**
     * @brief Construct a new mQAP object
     * 
     * @param numberOfObjectives   the number of objectives 
     * @param dimension            the dimension of problem
     * @param bestSolution         the best solution for the problem
     * @param flowMatrices         the flow matrices for the problem
     * @param distanceMatrix       the distance matrix for the problem
     * @param name                 the instance name
     */
    mQAP(int numberOfObjectives, int dimension,
         std::shared_ptr<int> bestSolution,
         std::vector<Matrix> flowMatrices,
         Matrix distanceMatrix, std::string name)

         : numberOfObjectives{numberOfObjectives},
           dimension{dimension},
           bestSolution{bestSolution},
           flowMatrices{flowMatrices},
           distanceMatrix{distanceMatrix},
           problemName{name}
         
        {}



           

};

#endif 