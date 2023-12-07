#include"mytemperature.h"
int main() {
	cout << "摄氏温度转化为华氏温度输入1" << endl << "华氏温度转化为摄氏温度输入2" << endl;
	int i,a;
	cin >>i;
	if(i==1){
		cout << "请输入摄氏温度"  <<endl;
		cin >> a;
		
		cout << "华氏温度为" << celsius_to_fah(a) << endl;
	}
	if (i == 2) {
		cout << "请输入华氏温度" << endl;
		cin >> a;
		cout << "摄氏温度为" << fahrenheit_to_cels(a) << endl;
	}
}