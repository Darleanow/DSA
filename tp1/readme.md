# TP1 Exercises

> The following tests have been executed to ensure that each sorting algorithm functions as intended.

## Bubble Sort

```c
int test_array[] = {4, 2, 5, 1, 3};
const int sorted_expected[] = {1, 2, 3, 4, 5};
const int test_array_size = sizeof(test_array) / sizeof(test_array[0]);

tp1.bubble_sort(test_array, test_array_size);

for (int i = 0; i < test_array_size; i++) {
    assert(test_array[i] == sorted_expected[i]);
}
```

---

## Selection Sort

```c
int test_array[] = {4, 2, 5, 1, 3};
const int sorted_expected[] = {1, 2, 3, 4, 5};
const int test_array_size = sizeof(test_array) / sizeof(test_array[0]);

tp1.selection_sort(test_array, test_array_size);

for (int i = 0; i < test_array_size; i++) {
    assert(test_array[i] == sorted_expected[i]);
}
```

---

## Merge Sort

```c
int test_array[] = {4, 2, 5, 1, 3};
const int sorted_expected[] = {1, 2, 3, 4, 5};
const int test_array_size = sizeof(test_array) / sizeof(test_array[0]);

tp1.merge_sort(test_array, 0, test_array_size);

for (int i = 0; i < test_array_size; i++) {
    assert(test_array[i] == sorted_expected[i]);
}
```

---

## Quick Sort

```c
int test_array[] = {4, 2, 5, 1, 3};
const int sorted_expected[] = {1, 2, 3, 4, 5};
const int test_array_size = sizeof(test_array) / sizeof(test_array[0]);

tp1.quick_sort(test_array, 0, test_array_size);

for (int i = 0; i < test_array_size; i++) {
    assert(test_array[i] == sorted_expected[i]);
}
```
