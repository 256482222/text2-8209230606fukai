#include"mytemperature.h"
int main() {
	cout << "�����¶�ת��Ϊ�����¶�����1" << endl << "�����¶�ת��Ϊ�����¶�����2" << endl;
	int i,a;
	cin >>i;
	if(i==1){
		cout << "�����������¶�"  <<endl;
		cin >> a;
		
		cout << "�����¶�Ϊ" << celsius_to_fah(a) << endl;
	}
	if (i == 2) {
		cout << "�����뻪���¶�" << endl;
		cin >> a;
		cout << "�����¶�Ϊ" << fahrenheit_to_cels(a) << endl;
	}
}