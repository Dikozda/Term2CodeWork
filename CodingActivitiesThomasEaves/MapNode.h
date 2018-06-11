#pragma once



class MapNode {

public:

	MapNode();


private:

	MapNode * NextNode;
	MapNode * LastNode;

	struct Location { unsigned short XRow; unsigned short YRow; };
};