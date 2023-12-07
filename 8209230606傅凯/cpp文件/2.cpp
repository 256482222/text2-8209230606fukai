#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = num - 1;i >= 2;i--) {
		if (num % i == 0) {
			return false;
		}

	}
	return true;

}
	int main(){
		int b = 0;
		for (int i = 1;i <= 200;i++) {
			
		

			if (is_prime(i)) {
				cout << i <<'\t';
				b++;
			}
			if (b % 10 == 0)cout << endl;
			
		}
}