int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool canMakeArithmeticProgression(int* arr, int n) {

    qsort(arr, n, sizeof(int), compare);

    int d = arr[1] - arr[0];

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] != d) {
            return false;
        }
    }

    return true;
}