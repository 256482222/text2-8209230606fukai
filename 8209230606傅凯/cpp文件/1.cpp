#include<iostream>
using namespace std;
void common(unsigned& a, unsigned& b) {
	if (a < b) {
		int c = a;
		a = b;
		b = c;
	}
		for (int i;1;) {
			i = b;
			b = a % b;
			a = i;
			if (b == 0)break;
		}
	


}
int main() {
	unsigned a, b;
	cout << "����������ֵ" << endl;
	cin >> a >> b;
	unsigned c = a, d = b;
	common(a, b);
	cout << "�����������Ϊ" << a << endl;
	cout << "���ǵ���С������Ϊ" << c * d / a<< endl;

}