// SMFL_01.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

//Mettre fichier include dans cpp plutot que dans H

#include "pch.h"
#include "Vehicule.h"
#include "MonsterTruck.h"
#include "FormulaOne.h"
#include "GameWindow.h"

int main()
{
	GameWindow* window = new GameWindow();

	window->CreateWindow();
	window->UpdateWindow();

	return 0;

	//FormulaOne* pF1 = new FormulaOne();
	//MonsterTruck* pMonster = new MonsterTruck();
	//
	//
	//pF1->Print();
	//
	//std::vector<Vehicule*> vehiculeList; //Le vector est un tableau flexible, on va y mettre des pointeurs de la classe vehicule
	//
	//vehiculeList.push_back(pF1); //On met une F1 dans un liste de vehicules pointer parce que F1 hérite de Vehicule :) 
	//vehiculeList.push_back(pMonster);
	//
	//pF1->wheel = 4.0f;
	//float test = pF1->wheel + 5.0f;
	//
	//for (size_t i = 0; i < vehiculeList.size(); i++)
	//{
	//	vehiculeList[i]->Print(); 
	//}
	//
	//for (size_t i = 0; i < vehiculeList.size(); i++)
	//{
	//	delete vehiculeList[i];
	//}
	//
	//_getch();
	//
	//return 0;
}