//
// Created by Hybin on 2019-07-25.
//

#include "tester.h"

using namespace std;

Tester::Tester(const std::string &path)
{
    ifstream in(path, ios_base::in);

    string record;
    while (getline(in, record)) {
        if (!record.empty()) {
            this->records.push_back(record);
        }
    }

    in.close();
}

// TODO: fit_transform the features; build the dataset

dataset Tester::build()
{
    dataset data;

    for (auto &record : records) {
        vector<string> features = utils::split(record, ",");
    }
}