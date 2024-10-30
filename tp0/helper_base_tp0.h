#pragma once

struct Base_tp0 {
    int (*sum_elements_in_array)(int [], int);

    int (*sum_elements_in_array_recursive)(int [], int);

    int (*factorial)(int);

    int (*factorial_recursive)(int);

    int (*linear_search)(int [], int, int);

    int (*binary_search)(int [], int, int);

    int (*binary_search_recursive)(int [], int, int, int);

    void (*reverse_array)(int *, int);

    int* (*fibonacci_sequence)(int);

    int (*is_palindrome)(char []);

    int (*get_substring_start)(char [], char []);
};

extern const struct Base_tp0 tp0;
