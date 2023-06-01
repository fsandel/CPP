template <typename Type>
void swap(Type &first, Type &second) {
  Type temp(second);
  second = first;
  first = temp;
}

template <typename Type>
Type min(Type first, Type second) {
  if (first < second)
    return first;
  else
    return second;
}

template <typename Type>
Type max(Type first, Type second) {
  if (first > second)
    return first;
  else
    return second;
}