#pragma once
#include <string>

enum TipoDePalabra {
		Sujeto,
		Adjetivo,
		Verbo,
		Adverbio,
		Preposicion,
		Sustantivo};



class Palabra
{
public:
	Palabra();
	~Palabra();
	std::string palabra;
	TipoDePalabra tipo;
	
	

};

