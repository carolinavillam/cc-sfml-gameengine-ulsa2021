#pragma once
#include<SFML/Graphics.hpp>
#include<string>
#include<iostream>
<<<<<<< HEAD

class Character
{
private:
  sf::Sprite* sprite{};
  sf::Vector2f position{};
  float scale{};
  float width{};
  float height{};
  float moveSpeed;
  sf::Texture* texture;
  //std::string textureUrl;
  sf::RenderWindow* window{};
=======
#include "Rigidbody.hh"
#include "GameObject.hh"

class Character : public GameObject
{
private:

  float moveSpeed;

  void Movement(float& deltaTime);
  void FlipSprite();
>>>>>>> development
public:
  Character();
  Character(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, float moveSpeed, 
<<<<<<< HEAD
  sf::RenderWindow*& window);
  ~Character();

  void Draw();
  void Movement(float& deltaTime);
  void FlipSprite();
=======
  sf::RenderWindow*& window, b2World*& world);
  ~Character();

  void Update(float& deltaTime) override;
>>>>>>> development
};