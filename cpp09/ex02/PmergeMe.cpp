#include "PmergeMe.hpp"

void PmergeMe::sortVector(std::vector<int>& vec) {
    // Implement the Ford-Johnson algorithm for std::vector
    // This is a placeholder for the actual sorting implementation
    std::sort(vec.begin(), vec.end());
}

void PmergeMe::sortList(std::list<int>& lst) {
    // Implement the Ford-Johnson algorithm for std::list
    // This is a placeholder for the actual sorting implementation
    lst.sort();
}

template<typename Container>
void PmergeMe::displayContainer(const std::string& message, const Container& container) {
    std::cout << message;
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template<typename Container>
double PmergeMe::measureSortTime(void (PmergeMe::*sortFunc)(Container&), Container& container) {
    auto start = std::chrono::high_resolution_clock::now();
    (this->*sortFunc)(container);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    return duration.count();
}

std::vector<int> PmergeMe::parseInput(int argc, char* argv[]) {
    std::vector<int> sequence;
    for (int i = 1; i < argc; ++i) {
        int num;
        try {
            num = std::stoi(argv[i]);
            if (num <= 0) throw std::invalid_argument("Only positive integers are allowed.");
        } catch (...) {
            throw std::invalid_argument("Invalid input. Only positive integers are allowed.");
        }
        sequence.push_back(num);
    }
    return sequence;
}
