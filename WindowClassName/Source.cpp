#include <Windows.h>
#include <iostream>
using namespace std;

HWND hwnd;
CHAR buff[100];
const char *windowname = "Калькулятор"; // Введите сюда название окна


void find() {
	hwnd = FindWindow(0, windowname);
	if (hwnd) {
		GetClassName(hwnd, buff, 100);
		MessageBox(0, buff, "Название класса", MB_OK);
	}

}

int main() {
	setlocale(LC_ALL, "Russian");
	find();
	return 0;
}