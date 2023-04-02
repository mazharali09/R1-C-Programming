#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned temp = 1 << n;
    unsigned bit = x & temp;
    bit = bit >> n;

    return bit; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}
/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
    unsigned temp = (1 << n);

    if (v == 0) {
        /* nth bit of x is made 0 with a bitwise AND operation */
        *x &= ~temp;
    } 
    else {
        /* nth bit of x is made 1 with a bitwise OR operation */
        *x |= temp;
    }
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned temp = 1 << n;
    unsigned bit = *x & temp;
    bit = bit >> n;
    
    if (bit == 0){
        /* bit is fliped and made 1 */
        *x |= temp;
    }
    else{
	/* bit is filped and made 0 */
	*x &= ~temp;
    }
}

