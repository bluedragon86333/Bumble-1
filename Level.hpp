#pragma once
#include<vector>
#include<iostream>
#include"Boundaries.hpp"
#include"BaseObj.hpp"

/*
	All basic variables for a top-down 2D Zelda-style game.

*/

class LevelVariables {
public:

	Boundaries bounds;

	std::vector <BaseObj> objects;
};