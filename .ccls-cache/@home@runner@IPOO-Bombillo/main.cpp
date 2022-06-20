#include <iostream>

#include "Bombillo.h" 

int main() {
	Bombillo objBombillo("100");

	std::cout << objBombillo.toString()<<"\n";
	std::cout << objBombillo.getEstado()<<"\n";
	
	objBombillo.alterarEstado();
	
	//Los mecanismos de visibilidad permiten la encapsulacion
	//-- objBombillo.estado=true;
	
	std::cout << objBombillo.toString()<<"\n";
	std::cout << objBombillo.getPotencia()<<"\n";

	std::cout << "La luminancia se mide en: ";
	std::cout <<objBombillo.medidaLuminancia<<"\n";	

	Bombillo otroBombillo("40");
	std::cout << otroBombillo.toString()<<"\n";
	std::cout << otroBombillo.getPotencia()<<"\n";
	
	std::cout << "Program finished!\n";
}