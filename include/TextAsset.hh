#pragma once

#include<SFML/Graphics.hpp>

class TextAsset
{
private:
  sf::Font* font{};
  sf::Text text;
  sf::RenderWindow* window{};
public:
  TextAsset(sf::RenderWindow*& window);
  ~TextAsset();
};