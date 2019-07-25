//
// Created by Hybin on 2019-07-25.
//

#include "include/utils.h"

using namespace std;

map<int, int> utils::count(const dataset &data)
{
    map<int, int> counter;
    for (auto &sample : data) {
        counter[sample.second] += 1;
    }
    return counter;
}

vector<string> utils::split(const string &str, const string &delimiter)
{
    vector<string> result;
    string::size_type start = 0, end = str.find(delimiter);

    while (end != string::npos) {
        result.emplace_back(str.substr(start, end - start));

        start = end + delimiter.size();
        end = str.find(delimiter, start);
    }

    if (start != str.length()) {
        result.emplace_back(str.substr(start));
    }

    return result;
}