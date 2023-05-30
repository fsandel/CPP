// This is fsandel version of swap template
template <typename Type>
void swap(Type &first, Type &second) {
  Type temp(second);
  second = first;
  first = temp;
}

// This is fsandel version of min template
template <typename Type>
Type min(Type first, Type second) {
  if (first < second)
    return first;
  else
    return second;
}

// This is fsandel version of max template
template <typename Type>
Type max(Type first, Type second) {
  if (first > second)
    return first;
  else
    return second;
}