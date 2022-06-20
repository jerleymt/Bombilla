    # ifndef BOMBILLO_H// guarda de compilacion permite que se compile una vez
    # define BOMBILLO_H
  
  #include <string>
  
  //-- Esta clase NO DEBIERA incluir a iostream
  #include <iostream>
  
  class Bombillo
  {
  	//-- private es modificador de visibilidad
  	private:
  	bool estado;
  	//-- static es modificador de acceso
  	static unsigned int inventario;
  	std::string potencia;
  
  	//-- public es modificador de visibilidad
  	public:
  	Bombillo(std::string potenciaIn);
    //metodo destructor
  	~Bombillo();
  	static const std::string medidaLuminancia;
  	bool getEstado();  //get es lectura set es escritura
  	void alterarEstado();
  	std::string toString();
  	std::string getPotencia();
  
  };
  
  # endif	