template <typename Type, typename Ret>
void iter(Type* address, std::size_t size, Ret func) {
  for (std::size_t i = 0; i < size; i++) {
    func(address[i]);
  }
}
