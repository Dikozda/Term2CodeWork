#pragma once

#include "Actor.h"

class Pawn {

public:

	Pawn();

	int GetHealth();

	int GetDamage();

private:

	int Health;

	int Damage;

};