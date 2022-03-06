#include <iostream>
#include "WaveController.h"

int main()
{
	Wave wave1, wave2;
	wave1.setEnemyMoney(25843.22);
	wave2.setEnemyMoney(2342.12);
	wave1.setNumberEnemies(24);
	wave2.setNumberEnemies(344);


	WaveController controller;

	std::cout << "Money :" << controller.CompareMoney(wave1, wave2) << std::endl;
	std::cout << "Number of enemies :" << controller.CompareNumber(wave1, wave2) << std::endl;
}
