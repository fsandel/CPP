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
