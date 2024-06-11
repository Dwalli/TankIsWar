#pragma once

#ifndef SQUARE_H
#define SQUARE_H


#include <SFML/Graphics.hpp>
#include "Line.h"

class Square : public Line
{
private:

public:
	Square(float fPosX, float fPosY, float fWi);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif