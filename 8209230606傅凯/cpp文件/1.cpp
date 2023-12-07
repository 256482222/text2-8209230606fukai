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
	cout << "请输入两个值" << endl;
	cin >> a >> b;
	unsigned c = a, d = b;
	common(a, b);
	cout << "他们最大公因数为" << a << endl;
	cout << "他们的最小公倍数为" << c * d / a<< endl;

}