#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

#include "Item.h"
#include "Container.h"
#include "Ability.h"
#include "Character.h"
#include "Map.h"
#include "util.h"

class ObjectTracker
{
	//IMPORTANT: INCLUDE FILE PATH TO FOLDER WITH DATA FILES HERE (if applicable)
	std::string filePath;// = "C:\\Users\\jaken\\source\\repos\\proj3\\";
	std::vector<Item*> items;
	std::vector<Container*> containers;
	std::vector<Ability*> abilities;
	std::vector<Character*> characters;
	std::vector<Map*> maps;

public:
	ObjectTracker() {};

	void readItems(std::string fileName);
	Item* getItem(int id);
	int getNumItems() { return (int)items.size(); };

	void readContainers(std::string fileName);
	Container* getContainer(int id);
	int getNumContainers() { return (int)containers.size(); };

	void readAbilities(std::string fileName);
	Ability* getAbility(int id);
	int getNumAbilities() { return (int)abilities.size(); };

	void readCharacters(std::string fileName);
	Character* getCharacter(int id);

	void readMaps(std::string fileName);
	Map* getMap(int id);
	int getNumMaps() { return(int)maps.size(); };
};