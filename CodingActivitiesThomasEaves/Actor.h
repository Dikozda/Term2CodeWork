#pragma once

#include <vector>

class Actor
{
private:
	struct Location { unsigned short IntX; unsigned short IntY;};

	char Character;

	bool CanBeWalkedOn;

public:

	Actor();

	Location GetLocation();

	char GetChar();

	bool GetCanBeWalkedOn();
};