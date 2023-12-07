#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int base = 1;
    int decimal = 0;
    int length = strlen(hexString);
    for (int i = length - 1; i >= 0; i--) {
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            decimal += (hexString[i] - '0') * base;
            base *= 16;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            decimal += (hexString[i] - 'a' + 10) * base;
            base *= 16;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            decimal += (hexString[i] - 'A' + 10) * base;
            base *= 16;
        }
    }
    return decimal;
}
int main() {
    cout << "������16���Ƶ�����" << endl;
    char a[80];
    cin.get(a, 80);
    cout<<parseHex(a);
    

}

