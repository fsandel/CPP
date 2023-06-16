#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
  char *end_ptr = NULL;
  long nbr_long = 0;
  int nbr_int = 0;
  clock_t start = clock();
  for (int i = 1; i < argc; ++i) {
    nbr_long = std::strtol(argv[i], &end_ptr, 10);
    if (end_ptr[0] != '\0') throw std::invalid_argument("invalid number");
    if (nbr_long > INT_MAX) throw std::invalid_argument("number out of range");
    if (nbr_long < 0) throw std::invalid_argument("negative number");
    nbr_int = static_cast<int>(nbr_long);
    this->checkDuplicate(nbr_int);
    this->deque_.push_back(nbr_int);
    this->vector_.push_back(nbr_int);
  }
  this->before_copy_ = this->vector_;
  this->inputTime_ = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
  this->dequeTime_ = 0;
  this->vectorTime_ = 0;
}

double PmergeMe::getInputTime() const { return this->inputTime_; }

std::vector<int> PmergeMe::getVector() const { return this->vector_; }

std::deque<int> PmergeMe::getDeque() const { return this->deque_; }

void PmergeMe::printLog() const {
  std::cout << "Before \t";
  printContainer(this->before_copy_);
  std::cout << std::endl << "After \t";
  printContainer(this->vector_);
  std::cout << std::endl;

  std::cout << "Time to process a range of " << this->vector_.size()
            << " elements with std::vector<int>: "
            << (this->inputTime_ + this->vectorTime_) / 1000 << "µs"
            << std::endl;
  std::cout << "Time to process a range of " << this->vector_.size()
            << " elements with std::deque<int>:  "
            << (this->inputTime_ + this->dequeTime_) / 1000 << "µs"
            << std::endl;
}

void PmergeMe::sort() {
  sortCont(this->vector_, this->vectorTime_);
  sortCont(this->deque_, this->dequeTime_);
}

void PmergeMe::checkDuplicate(int new_nb) const {
  for (std::vector<int>::const_iterator iter = this->vector_.begin();
       iter < this->vector_.end(); ++iter) {
    if (*iter == new_nb) throw std::invalid_argument("Duplicate found");
  }
}

PmergeMe::~PmergeMe() {}
