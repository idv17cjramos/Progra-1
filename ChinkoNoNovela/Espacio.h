#include <string>
#include <vector>
#include <iostream>


typedef struct Opcion {
	std::string Comando;
	int Salto;

} Opcion;

class Espacio
{
public:
	Espacio();
	~Espacio();
	friend std::istream & operator >> (std::istream &i, Espacio &obj);
	friend std::ostream & operator << (std::ostream &i, Espacio &obj);
	void displayActions();
	int returnJump(std::string accion);
private:
	std::string descripcion;
	std::vector <Opcion> opcion;


};