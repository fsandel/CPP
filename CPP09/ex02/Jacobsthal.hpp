int CalcJacobsthal(int iter);

template <typename Container>
Container JacobsthalContainer(int size) {
  Container vector;
  vector.push_back(0);
  int jacobsthal = CalcJacobsthal(0);
  int i = 0;
  int old_jacobsthal;
  int jacobsthal_copy;
  while (size >= jacobsthal) {
    old_jacobsthal = jacobsthal;
    i++;
    jacobsthal = CalcJacobsthal(i);
    jacobsthal_copy = jacobsthal;
    while (jacobsthal_copy > old_jacobsthal) {
      if (jacobsthal_copy < size) vector.push_back(jacobsthal_copy);
      jacobsthal_copy--;
    }
  }
  return vector;
}
