#pragma once

#ifndef LINE_H
#define LINE_H


#include <SFML/Graphics.hpp>

class Line : public sf::Drawable
{
private:



public:
	Line(float fPosX, float fPosY, float fWi);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	float ReturnPosition();

	float fPositionY;
	float fPositionX;
	float fWidth;
};

#endif

