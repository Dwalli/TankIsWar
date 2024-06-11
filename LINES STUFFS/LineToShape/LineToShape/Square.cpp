#include "Square.h"

Square::Square(float fPosX, float fPosY, float fWi) : Line(fPosX, fPosY, fWi)
{

}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::VertexArray SquareM(sf::Lines, 5);
	SquareM.setPrimitiveType(sf::LinesStrip);
	SquareM[0] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY), sf::Color::Black);
	SquareM[1] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY + fWidth), sf::Color::Black);
	SquareM[2] = sf::Vertex(sf::Vector2f(fPositionX + fWidth, fPositionY + fWidth), sf::Color::Black);
	SquareM[3] = sf::Vertex(sf::Vector2f(fPositionX + fWidth, fPositionY), sf::Color::Black);
	SquareM[4] = sf::Vertex(sf::Vector2f(fPositionX, fPositionY), sf::Color::Black);

	target.draw(SquareM);
}

