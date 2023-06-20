#pragma once
#include<string>
#include<iostream>
#include"Canal.h"
#include<vector>

using namespace std;

class TV {
private:
	int volumen;
	vector<Canal*> canales;
	bool estado;
	std::string marca;
	Canal* currentCanal;
public:
	TV() : volumen(0),
		estado(false),
		currentCanal(nullptr) {}

	void setCanal(Canal* canal) {
		currentCanal = canal;
	}

	void reproducirCanal() {
		if (currentCanal != nullptr) {
			currentCanal->reproducir();
		}
		else {
			std::cout << "No se ha seleccionado un canal." << std::endl;
		}
	}


};