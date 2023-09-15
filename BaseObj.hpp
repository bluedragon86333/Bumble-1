#pragma once


#include"Boundaries.hpp"

/*
	A template for any game object
	Can move, overlap, and has a static image as its default- combines old BaseObj and Billboard
*/

class BaseObj : public Boundaries {
public:

	int xv, yv;
	bool isVisible();

	bool isOnlyBaseObj = true; //when constructing child classes, set this to false so the children can use their own animation code

	void move() {
		x += xv;
		y += yv;
	}

	void setVel(int xin,int yin) {
		xv = xin;
		yv = yin;
	}

	void clearVel() {
		xv = 0;
		yv = 0;
	}
};