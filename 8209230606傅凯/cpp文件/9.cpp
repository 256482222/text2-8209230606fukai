#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0;i < size1;i++) {
		list3[i] = list1[i];
	}
	for (int i = 0;i < size2;i++) {

		list3[size1+i] = list2[i];
	}
	int m = size1 + size2;
	for (int i = 0;i < m - 1;i++) {
		for (int n = i + 1;n < m;n++) {
			if (list3[i] > list3[n]) {
				int t = list3[i];
				list3[i] = list3[n];
				list3[n] = t;
					
			}
		}
	}
}
int main() {
	
	int size1;
	cout << "�������һ�������Ԫ�ظ���" << endl;
	cin>> size1;
	int* a = new int[size1];
	cout << "�����һ������Ԫ��" << endl;
	for (int i = 0;i < size1;i++)cin >> a[i];
	int size2;
	cout << "������ڶ��������Ԫ�ظ���" << endl;
	cin >> size2;
	int* b = new int[size2];
	cout << "����ڶ�������Ԫ��" << endl;
	for (int i = 0;i < size1;i++)cin >> b[i];
	cout << "��Ԫ������Ϊ" << endl;
	int* c = new int[size1 + size2];
	merge(a, size1, b, size2, c);
	for (int i = 0;i < size1 + size2;i++) {
		cout << c[i] << '\t';
		}
	delete[]a;
	delete[]b;
	delete[]c;
	
	
}