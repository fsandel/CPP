#include "Span.hpp"

Span::Span() : content_(std::vector<int>()), size_(0), amount_(0) {}

Span::Span(unsigned int N)
    : content_(std::vector<int>()), size_(N), amount_(0) {}

Span::~Span() {}

Span::Span(const Span& obj)
    : content_(std::vector<int>()), size_(obj.size_), amount_(obj.amount_) {
  this->content_ = std::vector<int>(obj.content_);
}

Span& Span::operator=(const Span& obj) {
  this->size_ = obj.size_;
  this->amount_ = obj.size_;
  this->content_ = std::vector<int>(obj.content_);
  return *this;
}

void Span::addNumber(const int number) {
  if (this->amount_ == this->size_) throw std::out_of_range("Span is full");
  content_.push_back(number);
  this->amount_++;
}

void Span::addRange(const unsigned int start, const unsigned int end) {
  if (end < start)
    throw std::invalid_argument("End needs to be bigger than start");
  for (unsigned int i = start; i < end; ++i) {
    this->addNumber(i);
  }
}

void Span::addRange(const unsigned int end) {
  for (unsigned int i = 0; i < end; ++i) {
    this->addNumber(i);
  }
}

void Span::addIter(const std::vector<int>::iterator iter,
                   const unsigned int amount) {
  for (unsigned int i = 0; i < amount; ++i) {
    this->addNumber(*(iter + i));
  }
}

void Span::addIter(const std::vector<int>::iterator begin,
                   const std::vector<int>::iterator end) {
  if (end < begin) throw std::invalid_argument("end should be before start");
  for (unsigned int i = 0; begin + i < end; ++i) {
    this->addNumber(*(begin + i));
  }
}

void Span::randomFill(int range) {
  const unsigned int to_fill = this->size_ - this->amount_;
  static bool seeded = false;
  if (!seeded) {
    std::srand(std::time(0));
    seeded = true;
  }
  for (unsigned int i = 0; i < to_fill; ++i) {
    this->addNumber(std::rand() % range);
  }
}

int Span::shortestSpan() const {
  if (this->size_ < 2)
    throw(std::length_error("Need at least 2 numbers to get a Span"));
  Span copy(*this);
  std::sort(copy.content_.begin(), copy.content_.end());

  std::vector<int> diff;
  for (unsigned int i = 1; i < this->amount_; ++i) {
    diff.push_back(copy[i] - copy[i - 1]);
  }
  return *std::min_element(diff.begin(), diff.end());
}

int Span::longestSpan() const {
  if (this->size_ < 2)
    throw(std::length_error("Need at least 2 numbers to get a Span"));
  const int max =
      *std::max_element(this->content_.begin(), this->content_.end());
  const int min =
      *std::min_element(this->content_.begin(), this->content_.end());

  return max - min;
}

std::ostream& operator<<(std::ostream& os, const Span& obj) {
  os << "(";
  for (unsigned int i = 0; i < obj.getAmount(); ++i) {
    if (i != 0) os << ", ";
    os << obj[i];
  }
  os << ")";
  return os;
}

unsigned int Span::getSize() const { return this->size_; }

unsigned int Span::getAmount() const { return this->amount_; }

int Span::operator[](unsigned int i) const {
  if (i >= this->amount_) throw std::out_of_range("Out of range");
  return this->content_[i];
}
