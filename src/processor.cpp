//
// Created by Hybin on 2019-07-25.
//

#include "include/processor.h"
#include "include/utils.h"

using namespace std;

Processor::Processor() = default;

double Processor::entropy(dataset &data)
{
    double ent = 0;

    // compute the size of the dataset
    double num_of_samples = data.size();

    // compute the size of samples with different labels
    map<int, int> counter = utils::count(data);

    // compute the accumulation of (Pk log2 Pk)
    for (auto &part : counter) {
        ent += part.second / num_of_samples * log2(part.second / num_of_samples);
    }

    return ent * -1;
}