#include <iostream>
#include <string>
using namespace std;

int main(void) {
	short a = 0;
	cout << "short 형 자료형의 크기: " + to_string(sizeof(short)) << endl;
	cout << "변수 a의 주소: " << &a << endl;
}