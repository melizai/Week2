#pragma once

#include "EnemiesStructures.h"
#include "Enemy.h"

#define ENEMY_HEALTH 10

class EnemyController
{
private:
    // Place here other required variables
    Enemy* enemies;
    int stepSize;
    Point startinLocation;
    int NrEnemies;
    int MaxEnemies;

public:
    void Init(
        int maximumEnemies,
        int step,
        Point initialLocation) // set maxEnemies and stepSize and allocated enemies and do the rest of initialization
    {
        NrEnemies = 0;
        MaxEnemies = maximumEnemies;
        startinLocation = initialLocation;
        stepSize = step;
        enemies = new Enemy[maximumEnemies + 1];
    }

    void Uninit() // delete allocated resources
    {
        delete[] enemies;
    }

    void Move() // move all spawned enemies (current enemies)
    {
        int i;
        if (NrEnemies > 0)
        {
            for (i = 0; i < NrEnemies; i++)
                enemies[i].Move(EnemyDirection::DownDirection, stepSize);
        }
    }

    void DamageAll() // goes through every enemy and shoots them with the damage value (index of the element + 1)
    {
        int i;
        if (NrEnemies > 0)
        {
            for (i = 0; i < NrEnemies; i++)
                enemies[i].Shoot(i + 1);
        }
    }

    int CountKilledEnemies() // returns the number of enemeies which are dead
    {
        int ctKillEnemies = 0, i;
        if (NrEnemies != 0)
        {
            for (i = 0; i < NrEnemies; i++)
            {
                if (enemies[i].IsDead())
                    ctKillEnemies++;
            }
        }
        return ctKillEnemies;
    }

    bool SpawnEnemy() // if it can add the new enemy with ENEMY_HEALTH health value returns true, otherwise false
    {
        if (NrEnemies < MaxEnemies - 1)
        {
            enemies[NrEnemies].Init(startinLocation, ENEMY_HEALTH);
            NrEnemies++;
            return 1;
        }
        return 0;
    }
};
