// Levi P

#include "permutations.h"
#include "randint.h"
#include <cstddef>
#include <algorithm> // for std::swap

//Sequential search function
static size_t search(const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
        if (array[i] == target)
            return i;
    return size;
}

//Algorithm 1
void permutations1(int array[], size_t size) {
    size_t count = 0;
    while (count < size) {
        int x = randint(1, static_cast<int>(size));
        if (search(array, count, x) == count) {
            array[count] = x;
            count++;
        }
    }
}

//Algorithm 2
void permutations2(int array[], size_t size) {
    bool* used = new bool[size + 1](); 
    for (size_t i = 0; i < size; ) {
        int x = randint(1, static_cast<int>(size));
        if (!used[x]) {
            used[x] = true;
            array[i++] = x;
        }
    }
    delete[] used;
}

//Algorithm 3
void permutations3(int array[], size_t size) {
    for (size_t i = 0; i < size; ++i)
        array[i] = static_cast<int>(i + 1);

    for (size_t i = 0; i < size; ++i) {
        size_t j = randint(0, static_cast<int>(size - 1));
        std::swap(array[i], array[j]);
    }
}