#include <iostream>
#include <string>

#include "iter.hpp"

void make_big(std::string &str) {
  for (std::size_t i = 0; i < str.length(); i++) {
    str.at(i) = std::toupper(str.at(i));
  }
}

void print_string(std::string &str) { std::cout << str << std::endl; }

int main(void) {
  std::string array[4] = {"first", "second", "third", "goodbye"};
  ::iter(array, 4, make_big);
  ::iter(array, 4, print_string);
  return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o <<
// rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't
//   write int[] tab. Wouldn't that make more sense? Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }
