#include <SFML/Graphics.hpp>
#include <iostream>


#include "Line.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    Line LLine(200.0, 200.0, 400.0);
    Square SSquare(300.0, 200.0, 200.0);
   // Triangle TTriangle(600.0, 400.0, 200.0, 200.0);;

    while (window.isOpen())
    {

        window.clear(sf::Color::White);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

        }

        window.draw(LLine);
        window.draw(SSquare);
      //  window.draw(TTriangle);

        window.display();
    }

    return 0;

}