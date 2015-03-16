#include <iostream>

using namespace std;

class EndianMode {
public:
	EndianMode() {
		printf("--------endian mode--------\n");

		unsigned int x;
		unsigned char *p;

		x = 0x11223344;
		p = (unsigned char *)&x;
		if (*p == 0x11) {
			printf("Big-endian machine: ");
		}
		else if (*p == 0x44) {
			printf("Little-endian machine: ");
		}
		for (int i = 0; i < sizeof(int); i++) {
			printf("%x ", *p++);
		}
		printf("\n");
	}
};