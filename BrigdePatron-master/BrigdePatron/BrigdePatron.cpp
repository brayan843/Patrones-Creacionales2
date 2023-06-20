
#include <iostream>
#include"Canal.h"
#include"TV.h"
#include"Tubox.h"
#include"Radio.h"
#include"Servicio.h"

using namespace std;

int main() {

	Canal canal1(1, "Canal 1");
	Canal canal2(2, "Canal 2");

	TV tv;
	tv.setCanal(&canal1);
	tv.reproducirCanal();

	Radio radio;
	radio.setCanal(98.5f);
	radio.reproducirCanal();

	Tubox tubox;
	tubox.reproducirPelicula();

	Servicio servicio("Netflix");
	cout << "Servicio: " << servicio.getNombre() << std::endl;

	return 0;
}