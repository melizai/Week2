
#pragma once // header guard

#include "EnemiesStructures.h"

class Enemy
{
private:
    Point location;
    int health;

public:
    void Init(Point intitialLocation, int initialHealth)
    {
        location = intitialLocation;
        health = initialHealth;
    }
    void Move(EnemyDirection direction, int step)
    {
        if (direction == EnemyDirection::UpDirection)
            location.y -= step;
        else if (direction == EnemyDirection::DownDirection)
            location.y += step;
        else if (direction == EnemyDirection::LeftDirection)
            location.x -= step;
        else if (direction == EnemyDirection::RightDirection)
            location.x += step;
    }

    bool IsDead() // returns true is current health is lower or equal to 0
    {
        if (health <= 0)
            return 1;
        return 0;
    }
    void Shoot(int damage) // decrease the health by damage
    {
        health -= damage;
    }
};

