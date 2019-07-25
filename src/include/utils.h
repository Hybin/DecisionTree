//
// Created by Hybin on 2019-07-25.
//

#ifndef DECISIONTREE_UTILS_H
#define DECISIONTREE_UTILS_H

#include <map>
#include <string>
#include "processor.h"

namespace utils {
    // Get the number of samples with the different label
    std::map<int, int> count(const dataset &data);

    // Split the string
    std::vector<std::string> split(const std::string &str, const std::string &delimiter);
}

#endif //DECISIONTREE_UTILS_H
