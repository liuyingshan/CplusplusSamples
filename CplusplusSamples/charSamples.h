#pragma  warning(disable:4996) // avoid unsafe function warning

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class CharSamples {
public:
	CharSamples() {
		printf("\n--------char samples--------\n");

		objectChar();
		pointerChar();
		arrayChar();
		char2String();
		string2char();
	}

	void objectChar() {
		printf("\n{object char sample}\n");

		char c1[] = "abc";
		char c2[4] = "def";
		//char c3[3] = "ghi"; // Error: "ghi" needs at least 4 bytes.
		char c4[4] = "j";

		printf("%d %d %s\n", &c1, c1, c1);
		printf("%d %d %s\n", &c2, c2, c2);
		printf("%d %d %s\n", &c4, c4, c4);
	}

	void pointerChar() {
		printf("\n{pointer char sample}\n");

		char *p1 = "123";
		char *p2 = new char[10];
		strcpy(p2, "456");
		// *p1 = '7'; // Error: p1 points to constant "123" which can not be changed.
		*p2 = '8';

		printf("%d %d %s\n", &p1, p1, p1);
		printf("%d %d %s\n", &p2, p2, p2);

		delete [] p2;
	}

	void arrayChar() {
		printf("\n{array char sample}\n");

		char *arr[] = { "abc", "def", NULL };
		for (int i = 0; arr[i]; i++) {
			for (int j = 0; arr[i][j] != '\0'; j++) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}

	void char2String() {
		printf("\n{char to string sample}\n");

		char c[] = "abc";
		string s(c);
		printf("%s\n", s.c_str());
		//printf("%s\n", s); // Error
	}

	void string2char() {
		printf("\n{string to char sample}\n");

		string s("abc");
		char *c = new char[s.length() + 1];
		strcpy(c, s.c_str());
		printf("%s\n", c);
		delete [] c;
	}

};
