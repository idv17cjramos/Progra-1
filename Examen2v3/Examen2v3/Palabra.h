#pragma once
#include <string>

enum TipoDePalabra {
		Sujeto = 0,
		Adjetivo,
		Verbo,
		Adverbio,
		Preposicion,
		Sustantivo};



class Palabra
{
public:
	Palabra();
	Palabra(TipoDePalabra t);
	//Palabra(std::string Palabrita);
	~Palabra();
	std::string palabra;
	TipoDePalabra tipo;
	Palabra operator=(std::string);

};

