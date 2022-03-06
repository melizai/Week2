#pragma once
#include "EnemiesStructures.h"
#include "Enemy.h"

class Wave
{
private:
	char waveName;
	int numberenemies;
	int startingHealth;
	float enemyMoney;

public:
	char getWaveName() {
		return waveName;
	}
	void setWaveName(char name) {
		waveName = name;
	}
	int getNumberEnemies()
	{
		return numberenemies;
	}
	void setNumberEnemies(int number) {
		numberenemies = number;
	}
	int getStartingHealth()
	{
		return startingHealth;
	}
	void setStartingHealth(int health)
	{
		startingHealth = health;
	}
	float getEnemyMoney() {
		return enemyMoney;
	}
	void setEnemyMoney(float money)
	{
		enemyMoney = money;
	}
};
