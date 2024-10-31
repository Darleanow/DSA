#include "helper_base_tp1.h"

#include <stdlib.h>

void bubble_sort(int array[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // const int temp = array[j];
                // array[j] = array[j + 1];
                // array[j + 1] = temp;

                // XOR, produces same result as above without a temp variable, just to flex
                array[j] ^= array[j + 1];
                array[j + 1] ^= array[j];
                array[j] ^= array[j + 1];
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void selection_sort(int array[], const int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        if (min != i) {
            const int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

void merge(int[], int, int, int);

void merge_sort(int array[], const int start, const int end) {
    if (start >= end) {
        return;
    }

    const int mid = (start+end) / 2;

    merge_sort(array, start, mid);
    merge_sort(array, mid+1, end);

    merge(array, start, mid, end);
}

void merge(int array[], const int start, const int mid, const int end) {
    int left = start;
    int right = mid + 1;
    const int temp_size = end - start + 1;
    int *temp = malloc(temp_size * sizeof(int));
    int temp_index = 0;

    if (temp == NULL) {
        perror("Wtf dawg ?");
        exit(EXIT_FAILURE);
    }

    while (left <= mid && right <= end) {
        if (array[left] <= array[right]) {
            temp[temp_index++] = array[left++];
            // more understandeable alternative would be:
            // temp[temp_index] = array[left];
            // temp++;left++;
        } else {
            temp[temp_index++] = array[right++];
        }
    }

    while (left <= mid) {
        temp[temp_index++] = array[left++];
    }

    while (right <= end) {
        temp[temp_index++] = array[right++];
    }

    for (int i = 0; i < temp_size; i++) {
        array[start+i] = temp[i];
    }

    free(temp);
}

int partition(int [],int, int);

void quicksort(int array[], const int start, const int end) {
    if (start >= end) {
        return;
    }

    const int pivot = partition(array, start, end);

    quicksort(array, start, pivot -1);
    quicksort(array, pivot +1, end);
}

int partition(int array[], const int start, const int end) {
    const int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (array[j] <= pivot) {
            i+=1;
            const int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

        }
    }

    const int temp = array[i+1];
    array[i+1] = array[end];
    array[end] = temp;

    return i+1;
}

const struct Base_tp1 tp1 = {
    .bubble_sort = bubble_sort,
    .selection_sort = selection_sort,
    .merge_sort = merge_sort,
    .quick_sort = quicksort
};
