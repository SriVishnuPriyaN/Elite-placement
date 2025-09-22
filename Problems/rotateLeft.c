int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;

    int *res = malloc(arr_count * sizeof(int));
    if (!res) exit(EXIT_FAILURE);

    // Reduce d if larger than arr_count
    d = d % arr_count;

    for (int i = 0; i < arr_count; i++) {
        res[i] = arr[(i + d) % arr_count];
    }

    return res;
}
