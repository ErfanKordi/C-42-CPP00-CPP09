#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

class PmergeMe {
public:
    PmergeMe() = default;
    ~PmergeMe() = default;

    void sortVector(std::vector<int>& vec);
    void sortList(std::list<int>& lst);

    template<typename Container>
    void displayContainer(const std::string& message, const Container& container);

    template<typename Container>
    double measureSortTime(void (PmergeMe::*sortFunc)(Container&), Container& container);

    std::vector<int> parseInput(int argc, char* argv[]);
};

#endif
