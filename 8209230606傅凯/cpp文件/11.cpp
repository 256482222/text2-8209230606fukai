#include<iostream>
using namespace std;
void count(const char s[], int counts[26]) {
	int size1 = sizeof(s) / sizeof(s[0]);
	for (int i = 0;i < 26;i++) {
		for (int j = 0;j < size1;j++) {
			if ((int)s[j] == 65 + i || (int)s[j] == 97 + i)counts[i]++;
		}
	}
}
int main(){
	char arr1[80];
	cout << "输入字符串" << endl;
	cin.get(arr1, 80);
	int arr2[26] = { 0 };
	cout << "结果为" << endl;
	count(arr1, arr2);
	
	for (int i = 0;i < 26;i++) {
		cout << (char)(97 + i) << '\t' << arr2[i] << endl;
	}
	
}
