#pragma once
#include "Wave.h"

class WaveController
{
private:
    /* data */
public:
    int CompareNumber(Wave wave1, Wave wave2)
    {
        int numberOfWave1 = wave1.getNumberEnemies();
        int numberOfWave2 = wave2.getNumberEnemies();

        if (numberOfWave1 == numberOfWave2) {
            return 0;
        }

        if (numberOfWave1 > numberOfWave2) {
            return 1;
        }

        if (numberOfWave1 < numberOfWave2) {
            return -1;
        }
    }

    int CompareMoney(Wave wave1, Wave wave2)
    {
        int numberOfWave1 = wave1.getEnemyMoney();
        int numberOfWave2 = wave2.getEnemyMoney();

        if (numberOfWave1 == numberOfWave2) {
            return 0;
        }

        if (numberOfWave1 > numberOfWave2) {
            return 1;
        }

        if (numberOfWave1 < numberOfWave2) {
            return -1;
        }
    }


};