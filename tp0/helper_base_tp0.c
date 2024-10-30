#include "helper_base_tp0.h"

#include <stdlib.h>
#include <string.h>

int sum_elements_in_array(int array[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum;
}

int sum_elements_in_array_recursive(int array[], const int size) {
    if (size == 0) {
        return array[size];
    }

    return array[size] + sum_elements_in_array_recursive(array, size - 1);
}

int factorial(const int number) {
    if (number <= 0) {
        return 0;
    }
    int sum = 1;

    for (int i = 1; i <= number; i++) {
        sum *= i;
    }

    return sum;
}

int factorial_recursive(const int number) {
    if (number <= 0) {
        return 0;
    }
    if (number == 1) {
        return number;
    }

    return number * factorial(number - 1);
}

int linear_search(int array[], const int size, const int number) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return i;
        }
    }

    return -1;
}

int binary_search(int array[], const int size, const int number) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        const int mid = (low + high) / 2;
        if (number == array[mid]) {
            return mid;
        }

        if (number > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int binary_search_recursive(int array[], const int low, const int high, const int number) {
    const int mid = (low + high) / 2;

    if (low > high) {
        return -1;
    }

    if (number == array[mid]) {
        return mid;
    }

    if (number < array[mid]) {
        return binary_search_recursive(array, low, mid - 1, number);
    }

    return binary_search_recursive(array, mid + 1, high, number);
}

void reverse_array(int *array, const int size) {
    int low = 0;
    int high = size;

    while (low < high) {
        const int temp = array[low];
        array[low] = array[high];
        array[high] = temp;

        low++;
        high--;
    }
}

int *fibonacci_sequence(const int n) {
    if (n <= 0) {
        return NULL;
    }

    int *array = malloc(n * sizeof(int));
    if (!*array) {
        return NULL;
    }

    array[0] = 0;
    if (n > 1) array[1] = 1;

    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }

    return array;
}

int is_palindrome(const char string[]) {
    const size_t length = strlen(string);
    const size_t middle = length / 2;

    for (int i = 0; i < middle; i++) {
        if (string[i] != string[length - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int get_substring_start(char string[], char sub_search[]) {
    const size_t length = strlen(string);
    const size_t substr_length = strlen(sub_search);

    if (substr_length > length) {
        return -1;
    }

    for (int i = 0; i <= length - substr_length; i++) {
        int match = 1;
        for (int j = 0; j < substr_length; j++) {
            if (string[i + j] != sub_search[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}


const struct Base_tp0 tp0 = {
    .sum_elements_in_array = sum_elements_in_array,
    .sum_elements_in_array_recursive = sum_elements_in_array_recursive,
    .factorial = factorial,
    .factorial_recursive = factorial_recursive,
    .linear_search = linear_search,
    .binary_search = binary_search,
    .binary_search_recursive = binary_search_recursive,
    .reverse_array = reverse_array,
    .fibonacci_sequence = fibonacci_sequence,
    .is_palindrome = is_palindrome,
    .get_substring_start = get_substring_start
};
