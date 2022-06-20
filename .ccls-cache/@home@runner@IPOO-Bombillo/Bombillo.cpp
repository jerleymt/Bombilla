# include "Bombillo.h"


const std::string Bombillo::medidaLuminancia="W";

unsigned int Bombillo::inventario=0;

Bombillo::Bombillo(std::string potenciaIn){
	inventario++;
	estado=false;
	potencia=potenciaIn;
}

Bombillo::~Bombillo(){	
	std::cout<<"Chao a los pastores que se acabo la navidad...\n";
	if (estado){
		std::cout<<"Pa'la proxima me apaga primero :P\n";
	}
	if (--inventario==0){
		std::cout<<"...El ultimo de mi especie :'(\n";
	}
}
	

bool Bombillo::getEstado(){
	return estado;	
}

void Bombillo::alterarEstado(){
	estado=!estado;
}

std::string Bombillo::toString(){
	if (estado){return "Bombillo encendido :)";}
	return "Bombillo apagado :(";
}


std::string Bombillo::getPotencia(){
	std::string aux(potencia);
	return aux.append(medidaLuminancia);//concatena
}