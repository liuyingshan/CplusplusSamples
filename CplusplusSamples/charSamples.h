#pragma  warning(disable:4996)

#include <iostream>
#include <stdio.h>

using namespace std;

class CharSamples {
public:
	CharSamples() {
		printf("--------char samples--------\n");

		/*
		 object char
		 */
		char c1[] = "abc";
		char c2[4] = "def";
		//char c3[3] = "ghi"; // Error: "ghi" needs at least 4 bytes.
		char c4[4] = "j";

		printf("%d %d %s\n", &c1, c1, c1);
		printf("%d %d %s\n", &c2, c2, c2);
		printf("%d %d %s\n", &c4, c4, c4);

		/*
		 pointer to object char
		 */
		char *p1 = "123";
		char *p2 = (char *)malloc(10);
		strcpy(p2, "456");
		// *p1 = '7'; // Error: p1 points to constant "123" which can not be changed.
		*p2 = '8';

		printf("%s\n", p1);
		printf("%s\n", p2); // Output: 856
	}
};