#include<iostream>
using namespace std;
int taozi(int t) {
	for ( int i = 0;i < 9;i++) {
		t = 2 * (1 + t);
		

	}
	return t;

}
int main() {
	cout << "���ӳԵ�����Ϊ" <<taozi(1)<< endl;
}