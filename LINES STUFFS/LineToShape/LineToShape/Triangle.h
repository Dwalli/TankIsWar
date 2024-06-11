#pragma once

#ifndef SQUARE_H
#define SQUARE_H


#include <SFML/Graphics.hpp>
#include "Line.h"

class Triangle : public Line
{
private:
	float fHight;
public:
	Triangle(float fPosX, float fPosY, float fWi, float fHi);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
