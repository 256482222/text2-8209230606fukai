#include<iostream>
using namespace std;
int main() {
	cout << "������ʮ����" << endl;
	int arr[10] = { 0 };
	int a,d=0;
	bool m;
	for (int i = 0;i < 10;i++) {
		m = false;
		
		cin >> a;
	
		for (int h = 0;h < 10;h++) {
			if (arr[h] == a) { m = true;break; }
			}
		if (m)continue;
		else { arr[d] = a;d++; }
		
	}
	cout << "����Ϊ" << endl;
	for (int i = 0;i <d;i++) { cout << arr[i] << endl; }
} 