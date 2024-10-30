# TP 0 Exercises

> The following tests have been ran to ensure each method was working as intended

## Summing elements in an array

```c++
int test_array[] = {0, 1, 2, 3, 4, 5};
const int test_array_size = sizeof(test_array) / sizeof(test_array[0]);

const int sum_elements_results = tp0.sum_elements_in_array(test_array, test_array_size);
const int sum_elements_results_recursive =
        tp0.sum_elements_in_array_recursive(test_array, test_array_size - 1);

assert(sum_elements_results == 15);
assert(sum_elements_results_recursive == 15);
```

---

## Factorial of a number

```c++
const int factorial_number = 5;

const int sum_factorial = tp0.factorial(factorial_number);
const int sum_factorial_recursive = tp0.factorial_recursive(factorial_number);

assert(sum_factorial == 120);
assert(sum_factorial_recursive == 120);
```

---

## Linear & Binary search (with recursive version)

```c++
int search_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
const int search_array_size = sizeof(search_array) / sizeof(search_array[0]);
const int search_number = 8;
const int real_index = 7;

const int linear_search_found_index =
        tp0.linear_search(search_array, search_array_size, search_number);
const int binary_search_found_index =
        tp0.binary_search(search_array, search_array_size, search_number);
const int binary_search_found_index_recursive = tp0.binary_search_recursive(
    search_array, 0, search_array_size, search_number);

assert(linear_search_found_index == real_index);
assert(binary_search_found_index == real_index);
assert(binary_search_found_index_recursive == real_index);

```

---

## Reversing an array

```c++

int ordered_array[] = {0, 1, 2, 3, 4, 5};
const int ordered_array_size = sizeof(ordered_array) / sizeof(ordered_array[0]);
const int reversed_array[] = {5, 4, 3, 2, 1, 0};

tp0.reverse_array(ordered_array, ordered_array_size -1);

for (int i = 0; i < ordered_array_size; i++) {
    assert(reversed_array[i] == ordered_array[i]);
}

```

---

## Fibonacci sequence

```c++
const int size = 7;
int* sequence = tp0.fibonacci_sequence(size);
const int fibonacci_sequence_true[] = {0,1,1,2,3,5,8};

for (int i = 0; i < 7; i++) {
    assert(sequence[i] == fibonacci_sequence_true[i]);
}

free(sequence);

```

---

## Palindrome of a string

```c++
char string[] = "KayaK";

assert(tp0.is_palindrome(string) == 1);
```

---

## First substring array index

```c++
char main_string[] = "Hello World";
char sub_string[] = "World";

assert(tp0.get_substring_start(main_string,sub_string) == 6);
```
