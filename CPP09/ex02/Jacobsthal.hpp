#ifndef JACOBSTHAL_HPP_
#define JACOBSTHAL_HPP_

template <typename Test>
int CalcJacobsthal(int iter) {
  if (iter <= 0) return 0;
  if (iter == 1) return 1;
  int prevPrev = 0;
  int prev = 1;

  for (int i = 2; i <= iter; ++i) {
    int current = prev + 2 * prevPrev;
    prevPrev = prev;
    prev = current;
  }

  return prev;
}

template <typename Container>
Container JacobsthalContainer(int size) {
  Container vector;
  vector.push_back(0);
  int jacobsthal = CalcJacobsthal<int>(0);
  int i = 0;
  int old_jacobsthal;
  int jacobsthal_copy;
  while (size >= jacobsthal) {
    old_jacobsthal = jacobsthal;
    i++;
    jacobsthal = CalcJacobsthal<int>(i);
    jacobsthal_copy = jacobsthal;
    while (jacobsthal_copy > old_jacobsthal) {
      if (jacobsthal_copy < size) vector.push_back(jacobsthal_copy);
      jacobsthal_copy--;
    }
  }
  return vector;
}

#endif  //  JACOBSTHAL_HPP_
