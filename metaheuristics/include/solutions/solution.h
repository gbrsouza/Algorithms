#ifndef _SOLUTION_H_
#define _SOLUTION_H_

/**
 * @file solution.h
 * @author Gabriel Araújo de Souza (gabriel_feg@hotmail.com)
 * @brief The intefarce for a generic solution
 * @version 0.1
 * @date 2019-05-01
 * 
 * @copyright Copyright (c) 2019
 * 
 */

/**
 * @brief A interfarce for a solution of 
 * a problem 
 */
class Solution {

protected:
    int cost;  //<! the cost of solution

public:

    /**
     * @brief Construct a new Solution object
     * @param cost the cost of solution
     */
    Solution ( int cost = 0 ) : cost{cost}{}

    /**
     * @brief Destroy the Solution object
     */
    ~Solution(){/*empty*/}

    /**
     * @brief Get the solution object
     * @return int the cost of solution
     */
    int
    get_solution()
    { return cost; }

    /**
     * @brief Set the solution object
     * @param cost the new cost of solution
     */
    void 
    set_solution( int cost )
    { this->cost = cost; }

};

#endif