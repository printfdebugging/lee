#pragma once

#include <SFML/Graphics/Font.hpp>

class Editor
{
public:
    void run();
    bool initialize(const std::string& rConfigPath);

private:
    sf::Font    maFont;
    size_t      maFontSize;
};
