#pragma once

struct Base_tp1 {
    void (*bubble_sort)(int [], int);
    void (*selection_sort)(int [], int);
    void (*merge_sort)(int [], int, int);
    void (*quick_sort)(int [], int, int);

};

extern const struct Base_tp1 tp1;
