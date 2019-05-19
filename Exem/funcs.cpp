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
int lossNumber(int* arr,int n) {
	int aSum = (1 + n) * n/2;
	int rSum = 0;
	n -= 1;
	for (int i = 0; i < n; i++) {
		rSum += arr[i];
	}
	return aSum-rSum;
	/*
	ограничения:
	Путем решения квадратного уравнения у округлением до целого
	получаем размер максимального элемента 65535
	при этом арифметическая сумма не привысит 2147483647.
	Как обойти ограничения:
	1) для суммы использовать тип long long, тогда максимальное значение элемента 4'294'967'296
    т.е. превышает int
	2) отсортировать список, затем, перебирая последовательно элементы найти два элемента,
	разница между которыми равна 2, элемент между ними и есть искомый.
	*/

}


