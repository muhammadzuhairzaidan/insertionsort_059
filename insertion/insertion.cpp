#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukan jumlah data pada array";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\n Array yang anda masukan maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)
	{
	