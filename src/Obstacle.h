#pragma once
#ifndef __OBSTACLE__
#define __OBSTACLE__

#include "GameObject.h"

class Obstacle : public GameObject
{
public:
	Obstacle();
	~Obstacle();
	
	// GameObject Life Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;
private:
};

#endif /* defined (__OBSTACLE__) */