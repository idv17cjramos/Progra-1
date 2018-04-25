// ChinkoNoNovela.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	std::vector <Espacio> laNovela;
	int novelaSize;
	std::fstream archivoNovela("TomaTuAventuraJP.txt",std::ios::in);
	archivoNovela >> novelaSize;
	for (int i = 0; i < novelaSize; ++i)
	{
		Espacio esta;
		archivoNovela >> esta;
		laNovela.push_back(esta);
	}
	archivoNovela.close();
	int salto = 0;
	std::fstream salvado("SalvameEsta.txt", std::ios::in);
	if (salvado.good())
		salvado >> salto;
	salvado.close();
	while (salto >= 0)
	{
		std::string accion;
		std::cout << laNovela.at(salto) << std::endl;
		std::cin >> accion;
		if (accion == "help")
		{
			std::cout << "Desplegando opciones" << std::endl;
			Sleep(1000);
			std::cout << "Tus opciones son: ";
			laNovela.at(salto).displayActions();
		}
		else if (accion == "save")
		{
			salvado.open("SalvameEsta.txt", std::ios::out | std::ios::trunc);
			salvado << salto;
			salvado.close();
			std::cout << "Salvado" << std::endl;

		}
		else
		{
			int accionSalto = laNovela.at(salto).returnJump(accion);
			if (accionSalto == -42)
				std::cout << "Uy, hubo un error :s" << std::endl;
			else
				salto = accionSalto;

		}
	}
    return 0;
}

