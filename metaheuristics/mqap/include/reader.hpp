#ifndef _READER_H_
#define _READER_H_

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

#include "mqap.hpp"

using namespace std;

class reader {
public:
    static mqap read (string filename);
};

#endif