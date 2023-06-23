void insertion_sort(){
    insert (pair.small[0], 0),
    for iter = 1; iter < size(pair), iter++) {
        jakobi = calc_jakobi(iter, size)
        binary_insert(pair.small(jakobi), somewhere below par.big(jakobi))
        }
}

template <typename Container>
int binarySearch(const Container& arr, int left, int right, const int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;  // Found the insertion position

        if (arr[mid] < target)
            left = mid + 1;  // Search in the right half
        else
            right = mid - 1;  // Search in the left half
    }
}

int calc_jacobsthal(int iter, int size) {
    if (iter == 0)
        return 0;
    if (iter == 1)
        return 1;
    int jakobi = calc_jacobsthal(iter - 1, size) + 2 * calc_jacobsthal(iter - 2, size);
    if (jakobi >= size)
        jakobi = calc_jacobsthal(iter + 1, size);
    return jakobi;
}