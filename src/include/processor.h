//
// Created by Hybin on 2019-07-25.
//

#ifndef DECISIONTREE_PROCESSOR_H
#define DECISIONTREE_PROCESSOR_H

#include <vector>
#include <utility>
#include <cmath>

using sample = std::pair<std::vector<int>, int>;
using dataset = std::vector<sample>;

class Processor {
public:
    Processor();

    // Compute the information entropy of the dataset
    double entropy(dataset & data);

    // Compute the information gain of the dataset
    // created based on a selected feature
    double gain(dataset & data);

    // Compute the information gain ratio of the dataset
    // created based on a selected feature
    double gainRatio(dataset & data);
};


#endif //DECISIONTREE_PROCESSOR_H
