//
//  Monster.h
//  TestCpp
//
//  Created by Elias Farhan on 29/11/16.
//
//


#define MONSTER_H
#ifndef Monster_h




enum class MonsterType
{
	ORC = 1,
	TROLL = 2,
	GOBLIN = 3
};


class Monster
{
private:
	double health;
	double attackPower;
	double defensivePower;
	double speed;
	
public:
	Monster();

	MonsterType race;
	double getHealth();
	double getSpeed();
	MonsterType getRace();
	void attack(Monster *m);
	~Monster();
};


#endif /* Monster_h */
