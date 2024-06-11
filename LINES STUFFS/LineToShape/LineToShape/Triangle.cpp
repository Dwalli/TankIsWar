#include "Triangle.h"

Triangle::Triangle(float fPosX, float fPosY, float fWi, float fHi) : Line(fPosX, fPosY, fWi)
{
	fHight = fHi;
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::VertexArray SquareM(sf::Lines, 4);
	SquareM.setPrimitiveType(sf::LinesStrip);
	SquareM[0] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY), sf::Color::Black);
	SquareM[1] = sf::Vertex(sf::Vector2f(fPositionX - fWidth, fPositionY), sf::Color::Black);
	SquareM[2] = sf::Vertex(sf::Vector2f(fPositionX - (fWidth / 2), fPositionY - fHight), sf::Color::Black);
	SquareM[3] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY), sf::Color::Black);

	target.draw(SquareM);
}
