#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>
#include <cstdlib>
#include <libintl.h>

double nAspectRatio = 16.0 / 9.0;
double nWindowWidth  = 800;
double nWindowHeight = nWindowWidth / nAspectRatio;

int main()
{
    sf::RenderWindow aWindow(sf::VideoMode(nWindowWidth, nWindowHeight), "Lee");
    sf::Font aFont;
    if (!aFont.loadFromFile("src/IosevkaNerdFont-Regular.ttf"))
    {
        std::cout << "Error: Font not loaded\n";
        exit(1);
    }

    std::string aInput;

    while (aWindow.isOpen())
    {
        sf::Event aEvent;
        while (aWindow.pollEvent(aEvent))
        {
            if (aEvent.type == sf::Event::Closed)
                aWindow.close();
            if (aEvent.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::A <= aEvent.key.code && aEvent.key.code <= sf::Keyboard::Z)
                {
                    aInput += char(aEvent.key.code + 40);
                }
            }
        }

        aWindow.clear(sf::Color::White);


        sf::Text aText;
        aText.setFont(aFont);
        aText.setColor(sf::Color::Black);
        aText.setCharacterSize(20);
        std::cout << aText.getGlobalBounds().width << std::endl;
        aText.setString(aInput);
        aWindow.draw(aText);

        aWindow.display();
    }
}
