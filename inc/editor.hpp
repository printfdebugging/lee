#pragma once


#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Editor
{
public:
    void initialize();
    void run();
private:
    sf::RenderWindow maWindow;
    sf::Font         maFont;
};
