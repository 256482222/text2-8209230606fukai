#include<iostream>
using namespace std;
int main() {
	int m;
	bool arr[100];
	for (int i = 0;i < 100;i++) {
		arr[i] = false;
	}
	for (int i = 2;i <= 100;i++) {
		for (int n = 0;i + n * (i + 1) < 100;n++) {
			m = i + n * (i + 1);
			if (arr[m])arr[m] = false;
			else arr[m] = true;
		}
	}
	cout << "���ŵĴ����" << endl;
	for(int i=0;i<100;i++){
		if (arr[i])cout << i << '\t';
	}
		
}