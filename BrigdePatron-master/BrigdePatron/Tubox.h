#pragma once
#include<string>
#include<iostream>
using namespace std;

class Tubox {
private:
	int volumen;
	std::string servicioActual;
	std::string pelicula;

public:
	Tubox() : volumen(0), servicioActual(""), pelicula("") {}

	void setVolumen(int vol) {
		volumen = vol;
	}

	void reproducirPelicula() {
		cout << "Reproduciendo la pelicula " << pelicula << std::endl;
	}


};