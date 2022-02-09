#pragma once

#include<iostream>
using namespace std;

namespace CeasarCipher {
	string Encrypt(string Message, int Shift);
	string Decrypt(string Message, int Shift);
	void Ceasar();
}