#include "Espacio.h"

Espacio::Espacio()
{
}

Espacio::~Espacio()
{
}

void Espacio::displayActions()
{
	for (int i = 0; i < opcion.size(); ++i)
	{
		std::cout << opcion.at(i).Comando << " ";
	}
	std::cout << std::endl;
}


int Espacio::returnJump(std::string accion)
{
	int salto = -42;
	for (int i = 0; i < opcion.size(); ++i)
	{
		if (opcion.at(i).Comando == accion)
		{
			salto = opcion.at(i).Salto;
			break;
		}
	}
	return salto;
}

std::istream & operator>>(std::istream & i, Espacio & obj)
{
	int Descartable;
	i >> Descartable;
	std::getline( i,obj.descripcion);	
	i >> Descartable;
	for (int j = 0; j < Descartable; ++j)
	{
		int Salto;
		std::string opcion;
		i >> opcion >> Salto;
		obj.opcion.push_back(Opcion { opcion, Salto });
	}
	
	return i;
}

std::ostream & operator<<(std::ostream & i, Espacio & obj)
{
	i << obj.descripcion;
	return i;

}
