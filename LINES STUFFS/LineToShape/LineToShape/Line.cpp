#include "Line.h"


Line::Line(float fPosX, float fPosY, float fWi)
{
	fPositionX = fPosX;
	fPositionY = fPosY;
	fWidth = fWi;
}

void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::VertexArray LineM(sf::Lines, 2);
	LineM.setPrimitiveType(sf::LinesStrip);
	LineM[0] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY), sf::Color::Black);
	LineM[1] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY + fWidth),sf::Color::Black);

	target.draw(LineM);
}

float Line::ReturnPosition()
{
	return fPositionY;
}
