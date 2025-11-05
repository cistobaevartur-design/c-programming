#include <stdio.h>


void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (size_t i = 0; i < size_src1; i++) {
        dest[i] = src1[i];
    }
    for (size_t i = 0; i < size_src2; i++) {
        dest[size_src1 + i] = src2[i];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }

    for (size_t i = 0; i < size_src2; ++i) {
        dest[i + size_src1] = src2[i];
    }

    size_t totalsize = size_src1 + size_src2;

    for (size_t i = 0; i < totalsize; ++i) {
        size_t min_i = i;
        for (size_t j = i + 1; j < totalsize; ++j) {
            if (dest[j] < dest[min_i]) {
                min_i = j;
            }
        }
        
        if (min_i != i) {
            int temp = dest[i];
            dest[i] = dest[min_i];
            dest[min_i] = temp;
        }
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (size == 0) {
        return;
    }
    
    *min = src[0];
    *max = src[0];
    
    for (size_t i = 1; i < size; i++) {
        if (src[i] < *min) {
            *min = src[i];
        }
        if (src[i] > *max) {
            *max = src[i];
        }
    }
}
