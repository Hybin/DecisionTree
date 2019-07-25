//
// Created by Hybin on 2019-07-25.
//

#ifndef DECISIONTREE_TESTER_H
#define DECISIONTREE_TESTER_H

#include <string>
#include <vector>
#include <fstream>
#include "../src/include/utils.h"

using sample = std::pair<std::vector<std::string>, std::string>;
using dataset = std::vector<sample>;

class Tester {
public:
    Tester(const std::string & path);

    // Build the dataset
    dataset build();

private:
    std::vector<std::string> records;
};


#endif //DECISIONTREE_TESTER_H
