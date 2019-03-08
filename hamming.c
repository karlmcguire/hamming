#include "hamming.h"

int
hamming_distance(int l, char* a, char* b) {
    int d = 0; 
    int i = 0; 

    for(; i < l; i++)
        d += (__builtin_popcount(a[i] ^ b[i]) != 0) ? 1 : 0; 

    return d;
}
