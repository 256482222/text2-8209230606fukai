#include<iostream>
using namespace std;
int m;
void paixu(double arr[10]) {
	for (int i = 0;i < 9;i++) {
		for (int j = i + 1;j < 10;j++) {
			if (arr[i] > arr[j]) {
				m = arr[i];
				arr[i] = arr[j];
				arr[j] = m;
			}
		}
	}
}
int main() {
	double arr[10];
	cout << "������ʮ����" << endl;
		for (int i = 0;i < 10;i++) {
			cin >>arr[i];
	}
		paixu(arr);
		cout << "�����Ϊ" << endl;

		for (int i = 0;i < 10;i++)cout << arr[i] << endl;
}