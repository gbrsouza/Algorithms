#ifndef _MULTIOBJECTIVE_PROBLEM_H_
#define _MULTIOBJECTIVE_PROBLEM_H_

/**
 * @file multiObjectiveProblem.h
 * @author Gabriel Araújo de Souza (gabriel_feg@hotmail.com)
 * @brief The abstract class for a multi-objective problem
 * @version 0.1
 * @date 2019-05-01
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <memory>
#include <string>

/**
 * @brief the abstract class for a multi-objective
 * problem
 * 
 */
class MProblem {

protected:
    std::string instanceName; //<! the instance name
    int numberOfObjectives;   //<! the number of objectives

};


#endif