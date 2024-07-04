#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    }

    PmergeMe sorter;

    try {
        std::vector<int> sequence = sorter.parseInput(argc, argv);

        sorter.displayContainer("Before: ", sequence);

        std::vector<int> vec = sequence;
        std::list<int> lst(sequence.begin(), sequence.end());

        double timeVector = sorter.measureSortTime(&PmergeMe::sortVector, vec);
        double timeList = sorter.measureSortTime(&PmergeMe::sortList, lst);

        sorter.displayContainer("After: ", vec);
        std::cout << "Time to process a range of " << sequence.size() << " elements with std::vector: " << timeVector << " us" << std::endl;
        std::cout << "Time to process a range of " << sequence.size() << " elements with std::list: " << timeList << " us" << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
