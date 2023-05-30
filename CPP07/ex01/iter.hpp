// This is fsandel version of swap template
template <typename Type>
void iter(Type* address, std::size_t size, void (*func)(Type&)) {
  for (std::size_t i = 0; i < size; i++) {
    func(address[i]);
  }
}