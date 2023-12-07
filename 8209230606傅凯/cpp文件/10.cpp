#include<iostream>
using namespace std;
int indexof(const  char s1[], const char s2[]) {
	int size2 = sizeof(s2) / sizeof(s2[0]);
	int size1 = sizeof(s1) / sizeof(s1[0]);
	bool m = false;
	int i = 0;
	for (;i < size2;i++) {
		if (s1[0] == s2[i]) {
			int j = i;
			for (int n = 0;n < size1-1&&i<size2-1;n++) {
				if (s1[n] != s2[i + n]) { m = false;break; }
				else m = true;
			}
			if (m == true) { return j+1; }
		}
	}
	
	return -1;
		
	
}
int main() {
	char arr1[80], arr2[80];
	cout << "输入第一个数组" << endl;
	for (int i = 0;i < 80;i++) {
		cin.get(arr1[i]);
		if ((int)arr1[i] == 10)break;
		
	}
	
	
	cout << "输入第二个数组" << endl;
	for (int i = 0;i < 80;i++) {
		cin.get(arr2[i]);
		if ((int)arr2[i] == 10)break;

	}
	cout << "结果为" << indexof(arr1, arr2) << endl;
}