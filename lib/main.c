#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "blake2.h"
#include "monocypher.h"

int main(void) {
	uint8_t d[128], out1[64], out2[64];
	int result = 0;

	for(size_t i = 0; i < 128; i++) d[i] = i;
	
	for(size_t o = 1; o <= 64; o++)
		for(size_t k = 0; k <= 64; k++)
			for(size_t m = 0; m < 128; m++) {
				blake2b(out1, d, d, o, m, k);
				crypto_blake2b_general(out2, o, d, k, d, m);
				result |= memcmp(out1, out2, o);	
			}
	return result;
}
