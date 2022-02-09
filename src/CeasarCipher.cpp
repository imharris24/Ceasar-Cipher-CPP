#include<conio.h>
#include<string>

#include "CeasarCipher.h"

string CeasarCipher::Encrypt(string Message, int Shift) {
	string EncryptedMessage = "\0";
	for (int i = 0; i < Message.length(); i++) {
		if (isupper(Message[i])) {
			EncryptedMessage += char(int(Message[i] + Shift - 65) % 26 + 65);
		}
		else {
			EncryptedMessage += char(int(Message[i] + Shift - 97) % 26 + 97);
		}
	}
	return EncryptedMessage;
}
string CeasarCipher::Decrypt(string Message, int Shift) {
	string DecryptedMessage = "\0";
	Shift = 26 - Shift;
	for (int i = 0; i < Message.length(); i++) {
		if (isupper(Message[i])) {
			DecryptedMessage += char(int(Message[i] + Shift - 65) % 26 + 65);
		}
		else {
			DecryptedMessage += char(int(Message[i] + Shift - 97) % 26 + 97);
		}
	}
	return DecryptedMessage;
}
void CeasarCipher::Ceasar() {
	char opt = '\0';
	string Message = "\0";
	int Shift = 0;
	while (true) {
		system("cls");
		cout << "CEASAR CIPHER\n";
		cout << "1. Encrypt\n";
		cout << "2. Decrypt\n";
		cout << "3. Return\n";
		cout << "   Option: ";
		opt = _getche();
		cout << "\n";
		switch (opt) {
		case '1' :
			cout << "\nEnter Message to Encrypt: ";
			getline(cin, Message);
			cout << "Enter Key: ";
			cin >> Shift;
			cin.ignore();
			cout << "\nEncrypted: " << CeasarCipher::Encrypt(Message, Shift) << "\n";
			system("pause");
			break;
		case '2':
			cout << "\nEnter Message to Decrypt: ";
			getline(cin, Message);
			cout << "Enter Key: ";
			cin >> Shift;
			cin.ignore();
			cout << "\nEncrypted: " << CeasarCipher::Decrypt(Message, Shift) << "\n";
			system("pause");
			break;
		case '3':
			return;
			break;
		default:
			break;
		}
	}
}