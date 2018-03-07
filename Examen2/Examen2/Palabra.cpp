#include "Palabra.h"



Palabra::Palabra()
{
	
}

Palabra::Palabra(std::string Palabrita)
{
	palabra = Palabrita;

	if (Palabrita == "El tren" || Palabrita == "Andres" || Palabrita == "Sergio" || Palabrita == "El titere")
	{
		tipo = TipoDePalabra::Sujeto;
	}
	if (Palabrita == "rojo" || Palabrita == "avergonzado" || Palabrita == "grande" || Palabrita == "antiguo")
	{
		tipo = TipoDePalabra::Adjetivo;
	}
	if (Palabrita == "avanza" || Palabrita == "cae" || Palabrita == "limpia" || Palabrita == "salta")
	{
		tipo = TipoDePalabra::Verbo;
	}
	if (Palabrita == "silenciosamente" || Palabrita == "precipitadamente" || Palabrita == "lentamente" || Palabrita == "felizmente")
	{
		tipo = TipoDePalabra::Adverbio;
	}
	if (Palabrita == "las vias" || Palabrita == "los tablones" || Palabrita == "el techo" || Palabrita == "la audiencia")
	{
		tipo = TipoDePalabra::Sustantivo;
	}


}


Palabra::~Palabra()
{

}

Palabra Palabra::operator=(std::string palabraEntrante)
{
	palabra = palabraEntrante;

	if (palabraEntrante == "El tren" || palabraEntrante == "Andres" || palabraEntrante == "Sergio" || palabraEntrante == "El titere")
	{
		tipo = TipoDePalabra::Sujeto;
	}
	if (palabraEntrante == "rojo" || palabraEntrante == "avergonzado" || palabraEntrante == "grande" || palabraEntrante == "antiguo")
	{
		tipo = TipoDePalabra::Adjetivo;
	}
	if (palabraEntrante == "avanza" || palabraEntrante == "cae" || palabraEntrante == "limpia" || palabraEntrante == "salta")
	{
		tipo = TipoDePalabra::Verbo;
	}
	if (palabraEntrante == "silenciosamente" || palabraEntrante == "precipitadamente" || palabraEntrante == "lentamente" || palabraEntrante == "felizmente")
	{
		tipo = TipoDePalabra::Adverbio;
	}
	if (palabraEntrante == "las vias" || palabraEntrante == "los tablones" || palabraEntrante == "el techo" || palabraEntrante == "la audiencia")
	{
		tipo = TipoDePalabra::Sustantivo;
	}




	return *this;
}
