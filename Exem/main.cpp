#include <iostream>
#include "funcs.h"
using namespace std;
int main() {
	//reverse string
	char str[] = " A roza upala na lapu Azora";
	//main case:
	cout << str << endl;
	char *newstr = reverse(str);
	cout << newstr << endl;
	delete newstr;
	//without added memory case:
	cout << str << endl;
	reverseIt(str);
	cout << str << endl;
	//////////////////////////

	//swap values of two vars, range value from 0 to 100 incluse
	cout << "\nswap:\n";
	int a = 20;
	int b = 70;
	//one case
	cout << "a= " << a << ", b= " << b << endl;
	a = a + b;//a+b
	b = a - b;//a+b-b=a
	a = a - b;//a+b-a=b
	cout << "a= " << a << ", b= " << b << endl;
	/*сумма чисел не должна превышать 2^31-1=~2млрд */
	//second case:
	a = a * 1000 + b;
	b = a / 1000;
	a = a % 1000;
	cout << "a= " << a << ", b= " << b << endl;
	/*ни a ни b не должны превышать 999*/
	//third case:
	a = -2147483646;
	b = 2147483647;
	cout << "a= " << a << ", b= " << b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "a= " << a << ", b= " << b << endl;
	/*пожоже здесь нет ограничений*/
	/////////////////////////

	//to find deleted number
	int arr[] = { 3, 7, 1, 2, 8, 5, 9, 6 };//8 элементов, 4 пропавшее число, ф-ия принимает максимальное число, оно же число элементов до удаления

	system("pause");
	return 0;
}
