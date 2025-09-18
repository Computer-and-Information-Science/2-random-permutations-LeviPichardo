//Levi P

#include "permutations.h"
#include "randint.h"
#include <cstddef>

// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1 (int array[], size_t size) {;
    // TODO: Implement algorithm #1 here
void permutations1(int array[], size_t size) {;
    size_t count = 0;
    while (count < size) {;
        int x = randint(1, static_cast<int>(size));
        if (search(array, count, x) == count) {
            array[count] = x;
            count++;
        }
    }
}

}

void permutations2 (int array[], size_t size) 
    // TODO: Implement algorithm #2 here;
    void permutations2(int array[], size_t size) {;
    bool* used = new bool[size + 1](); 

    for (size_t i = 0; i < size; ) {
        int x = randint(1, static_cast<int>(size));
        if (!used[x]) {
            used[x] = true;
            array[i++] = x;
        }
    }
}

void permutations3 (int array[], size_t size) {
    // TODO: Implement algorithm #3 here
    void permutations3(int array[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        array[i] = static_cast<int>(i + 1);
    }
}
//was a bit stuck