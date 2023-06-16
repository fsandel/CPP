#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    PmergeMe merge(argc, argv);
    std::cout << "creation time: " << merge.getInputTime() << std::endl;
    printContainer(merge.getVector());
    std::cout <<std::endl;
    printContainer(merge.getDeque());
    std::cout << std::endl;
    return 0;
}