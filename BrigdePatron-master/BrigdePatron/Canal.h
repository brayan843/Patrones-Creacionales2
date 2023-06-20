#pragma once
#include<string>
#include<iostream>
using namespace std;

class Canal {

private:
	int numero;
	std::string nombre;
public:
	Canal(int nro, std::string cana) : numero(nro), nombre(cana) {}

	void reproducir() {
		cout << "Reproduciendo canal " << numero << ": " << nombre << std::endl;
	}

};