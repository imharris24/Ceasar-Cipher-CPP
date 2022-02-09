#include "CeasarCipher.h"
#include <conio.h>
#include<string>
using namespace std;

int main() {
	char opt = '\0';
	while (true) {
		system("cls");
		cout << "ENCRYPTION-DECRYPTION\n";
		cout << "1. Ceasar Cipher\n";
		cout << "2. Exit\n";
		cout << "   Option: ";
		opt = _getche();
		cout << "\n";
		switch (opt) {
		case '1':
			CeasarCipher::Ceasar();
			break;
		case '2':
			exit(-1);
		default:
			break;
		}
	}
	return 0;
}