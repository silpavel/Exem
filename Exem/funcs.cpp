#include "funcs.h"
#include <iostream>
using namespace std;
char* reverse(const char* str) {
	int lenghtStr = strlen(str);
	char *newstr=new char[lenghtStr+1];
	for (int i = 0; i < lenghtStr; i++) {
		newstr[lenghtStr - i-1] = str[i];
	}
	newstr[lenghtStr] = '\0';
	return newstr;
}
void reverseIt(char* str) {
	int sizeStr = strlen(str);
	char buf;
	for (int i = 0; i < sizeStr / 2; i++) {
		buf = str[i];
		str[i] = str[sizeStr - 1 - i];
		str[sizeStr - 1 - i] =
 buf;
	}
}
int lossNumber(int) {
	return 0;
}


