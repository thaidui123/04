// 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;
int main() {
	int so1, so2, thuong;
	cout << "chuong trinh tinh thuong\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu 2:";
	cin >> so2;
	thuong =(float) so1 /so2;
	cout << so1 << "/" << so2 << "/"
		<< thuong
		<< endl;
	return 0;
}