#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window/Event.hpp>

size_t WINDOW_WIDTH = 800;
size_t WINDOW_HEIGHT = 400;

int main()
{
    sf::Font aFont;
    if (!aFont.loadFromFile("assets/IosevkaNerdFont-Regular.ttf"))
    {
        std::cerr << "Error loading font from file\n";
        return -1;
    }

    sf::RenderWindow aWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Lee");
    while (aWindow.isOpen())
    {
        sf::Event aEvent;
        while (aWindow.pollEvent(aEvent))
        {
            if (aEvent.type == sf::Event::Closed)
                aWindow.close();
        }

        aWindow.clear(sf::Color::White);

        sf::Text aText;
        aText.setFont(aFont);
        aText.setString("sahil gautam");
        aText.setCharacterSize(20);
        aText.setFillColor(sf::Color::Black);

        aWindow.draw(aText);

        aWindow.display();
    }
}
