#ifndef _QAPSOLUTION_H_
#define _QAPSOLUTION_H_

/**
 * @file solution.h
 * @author Gabriel Araújo de Souza (gabriel_feg@hotmail.com)
 * @brief  The implementation of QAPSolution
 * @version 0.1
 * @date 2019-05-01
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include "solution.h"
#include <memory>

/**
 * @brief The a especific solution for a 
 * QAP problem
 */
class QAPSolution : public Solution {

private:
    std::shared_ptr<int> solution; //<! the solution representation

public:

    /**
     * @brief Construct a new QAPSolution object
     * 
     * @param solution The n-dimensional array of integers
     * @param cost the cost of solution
     */
    QAPSolution( std::shared_ptr<int> solution,
                 int cost)
        : Solution{cost}, 
          solution{solution}{/*empty*/}

    /**
     * @brief Destroy the QAPSolution object
     */
    ~QAPSolution(){ /*empty*/ }

    /**
     * @brief update the qap solution with a 
     * new cost and a new sequence
     * 
     * @param solution the new solution
     * @param cost     the new cost 
     */
    void
    update_solution( 
        std::shared_ptr<int> solution,
        int cost)
    {
        this->solution = solution;
        this->cost = cost;
    }

    /**
     * @brief Get the solution object
     * @return std::shared_ptr<int> the n-dimensional
     * array for the solution
     */
    std::shared_ptr<int> 
    get_solution()
    { return this->solution; }

    /**
     * @brief Set the solution object
     * @param solution the new value to solution
     */
    void
    set_solution(
        std::shared_ptr<int> solution)
    { this->solution = solution; }

};

#endif