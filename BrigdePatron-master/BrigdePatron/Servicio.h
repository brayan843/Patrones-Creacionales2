#pragma once
#include<string>
#include<iostream>
using namespace std;

class Servicio {
private:
	std::string nombreServicio;
public:
	Servicio(string nombre) : nombreServicio(nombre) {}

	std::string getNombre() {
		return nombreServicio;
	}
	
};