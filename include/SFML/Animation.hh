#pragma once

#include<SFML/Graphics.hpp>
<<<<<<< HEAD
=======
#include "Drawable.hh"
>>>>>>> development

class Animation
{
private:
  float delay{};
  int row{};
  int startFrame{};
  int endFrame{};
  float width{};
  float height{};
  int currentFrame{};
<<<<<<< HEAD
  sf::Sprite* sprite;
  float timer{};
public:
  Animation(float delay, int row, int startFrame, int endFrame, float width, float height, sf::Sprite*& sprite);
=======
  Drawable* drawable;
  float timer{};
public:
  Animation(float delay, int row, int startFrame, int endFrame, float width, float height, Drawable*& drawable);
>>>>>>> development
  ~Animation();
  void Play(float& deltaTime);
};