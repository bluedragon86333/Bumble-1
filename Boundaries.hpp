
#pragma once
/*
	Basic boundary class.
	Used to denote which portion of the window is the actual game (as opposed to sidebars, top bars, etc)

*/

class Boundaries {
public:
	int x, y, width, height;

	Boundaries();
	Boundaries(int xin, int yin, int widthin, int heightin);
};