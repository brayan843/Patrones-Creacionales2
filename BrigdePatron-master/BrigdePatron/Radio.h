#pragma once
#include<string>
#include<iostream>
using namespace std;

// Implementación de la clase Radio usando el patrón Bridge
class Radio {
private:
	int volumen;
	float currentCanal;
	bool estado;

public:
	Radio() : volumen(0), estado(false), currentCanal(0.0f) {}

	void setCanal(float canal) {
		currentCanal = canal;
	}

	void reproducirCanal() {
		cout << "Reproduciendo radio en el canal " << currentCanal << std::endl;
	}


};