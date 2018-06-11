#include "Actor.h"

Actor::Actor()
{

}

Actor::Location Actor::GetLocation()
{

	return(Location{});
}

char Actor::GetChar()
{
	return(Character);
}

bool Actor::GetCanBeWalkedOn()
{
	return(CanBeWalkedOn);
}