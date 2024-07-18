#pragma once

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics.hpp>

class Editor
{
public:
    void run();
    bool initialize();

private:
    sf::Font    maFont;
    size_t      maFontSize;

    // Only single window for right now
    sf::RenderWindow maWindow;
};
