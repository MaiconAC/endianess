#include <stdint.h>
#include <stdio.h>

uint32_t byte_swap_32(uint32_t x);
void print_byte_sequence(uint32_t *x);

// Swap bytes position on memory
uint32_t byte_swap_32(uint32_t x) {
	uint32_t byte0 = x & 0xFF;
	uint32_t byte1 = x >> 8 & 0xFF;
	uint32_t byte2 = x >> 16 & 0xFF;
	uint32_t byte3 = x >> 24 & 0xFF;

	return byte3 | byte2 << 8 | byte1 << 16 | byte0 << 24;
}

void print_byte_sequence(uint32_t *x) {
	// Converts the 32bits (4 bytes) block into an array of 1 bytes blocks
	uint8_t *bytesOnMemory = (uint8_t *)x;	

	for (int i = 0; i < 4; i++) {
		printf("%X ", *(bytesOnMemory+i));
	}

	printf("\n");
}

int main() {
	uint32_t originalData = 0x01020304;
	print_byte_sequence(&originalData);

	uint32_t converted = byte_swap_32(originalData);
	print_byte_sequence(&converted);

	uint32_t convertedBack = byte_swap_32(converted);
	print_byte_sequence(&convertedBack);
}
