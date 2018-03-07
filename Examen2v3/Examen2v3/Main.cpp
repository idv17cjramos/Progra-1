#include "Palabra.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>



void HacerFrases();

int main()
{
	HacerFrases();



	system("pause");
	return 0;
}


void HacerFrases()
{
	std::ifstream inFile;
	std::ofstream outFile;
	inFile.open("palabras.txt");//Abrir archivo

	int contadorDePalabras = 0;
	std::vector <Palabra> Palabras;//no necesita tama;o
	TipoDePalabra tipoActual;
	for (std::string line; std::getline(inFile, line);)
	{
		if (line == " ")
			continue;
		else if (line == "Sujeto")
		{
			tipoActual = TipoDePalabra::Sujeto;
		}
		else if (line == "Adjetivo")
		{
			tipoActual = TipoDePalabra::Adjetivo;
		}
		else if (line == "Verbo")
		{
			tipoActual = TipoDePalabra::Verbo;
		}
		else if (line == "Advervio")
		{
			tipoActual = TipoDePalabra::Adverbio;
		}
		else if (line == "Preposicion")
		{
			tipoActual = TipoDePalabra::Preposicion;
		}
		else if (line == "Sustantivo")
		{
			tipoActual = TipoDePalabra::Sustantivo;
		}
		else
		{
			Palabras.push_back(Palabra(tipoActual));
			Palabras[contadorDePalabras++] = line;
		}

	}
	std::vector<std::string> frases;
	for (int i = 0; i < 8; ++i)
	{
		frases.push_back("");
		for (int j = 0; j < 6; ++j)
		{
			int rPalabra;
			while(true)
			{
				rPalabra = rand() % Palabras.size();
				if (Palabras[rPalabra].tipo == (TipoDePalabra)j)
					break;
			}
			frases[i] += Palabras[rPalabra].palabra;
			frases[i] += " ";
		}
		frases[i] += ".\n";
		std::cout << frases[i] << std::endl;
	}
	outFile.open("Salida.txt");
	for (int i = 0; i < frases.size(); ++i)
		outFile.write(frases[i].c_str(),frases[i].size());
	outFile.close();

}