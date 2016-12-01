//
//  Monster.cpp
//  TestCpp
//
//  Created by Elias Farhan on 29/11/16.
//
//


#include "Monster.h"
#include <iostream>


Monster::Monster()
{
	int monsterChoice;

	std::cout << "Choose your monster (1 = Orc, 2 = Troll, 3 = Goblin) : ";
	std::cin >> monsterChoice;

	race = (MonsterType)monsterChoice;

	std::cout << "Set your monster's stats (HP, AP, DP, S) : \n";
	std::cin >> health;
	std::cin >> attackPower;
	std::cin >> defensivePower;
	std::cin >> speed;



}




void Monster::attack(Monster *m)
{
	double damage = this->attackPower - m->defensivePower;

	if (damage < 0.0)
	{
		damage = 0.0;
	}
	if (m->health < 0.0)
	{
		m->health = 0.0;
	}
	m->health -= damage;
	

}




double Monster::getSpeed()
{
	return speed;
}

double Monster::getHealth()
{
	return health;
}

MonsterType Monster::getRace()
{
	return race;
}




Monster::~Monster()
{
}
