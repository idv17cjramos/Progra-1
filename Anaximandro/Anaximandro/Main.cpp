#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>


using namespace std;

void Anaximandro();


int main()
{
	Anaximandro();
}

void Anaximandro()
{

	ifstream inFile;
	inFile.open("Palabras.txt");//Abrir archivo

	int contadorDePalabras = 0;
	std::vector <std::string> Palabras;//no necesita tama;o
	for (std::string palabra; std::getline(inFile, palabra);)//for infinito por que no tiene el ++
		{
			Palabras.push_back(palabra);//metemos las palabras en el vector 
			std::cout << (Palabras[contadorDePalabras++]) << std::endl;//aqui hacemos el incremento de la variable
		}
	std::vector<std::vector<std::string>> anagramWords;
	
	for (int i = 0; i < Palabras.size(); ++i)//recorre vector
	{
		for (int j = i + 1; j < Palabras.size(); ++j)//recorre vector pero en posicion siguente al for anterior
		{
			if (Palabras[i].size() != Palabras[j].size()) continue;// checa si son del mismo tama;o


			//dentro del for i
	anagramWords.push_back(std::vector<std::string>());

	bool isAnagram = true;
			for (int k = 0; k < Palabras[i].size(); ++k)
			{
				for (int l = 0; l < Palabras[j].size(); ++l)
				{
					if (Palabras[j][l] != Palabras[i][k]) break;
					else if (l + 1 == Palabras[j].size()) isAnagram = false;
				}
				if (!isAnagram) break;
			}
			if (isAnagram)
				anagramWords[i].push_back(Palabras[j]);

		}
	}

	system("pause");
}



													


