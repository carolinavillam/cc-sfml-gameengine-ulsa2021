#include "Character.hh"
#include "InputSystem.hh"
#include "Animation.hh"


<<<<<<< HEAD
//sf::CircleShape* circle{new sf::CircleShape()};

=======
>>>>>>> development
Animation* idleAnim{};
Animation* runAnim{};

Character::Character(){}

<<<<<<< HEAD
Character::Character(const char* textureUrl, sf::Vector2f position, float scale, float width, 
float height, int col, int row, float moveSpeed, sf::RenderWindow*& window)
{
  this->position = position;
  this->scale = scale;
  this->width = width;
  this->height = height;
  this->width = width;
  this->window = window;
  this->moveSpeed = moveSpeed;
  //this->textureUrl = textureUrl;
  //std::cout << this->textureUrl << std::endl;
  texture = new sf::Texture();
  texture->loadFromFile(textureUrl);
  sprite = new sf::Sprite(*texture, sf::IntRect(col * width, row * height, width, height));
  sprite->setPosition(position);
  sprite->setScale(sf::Vector2f(scale, scale));
  sprite->setColor(sf::Color::White);
  sprite->setOrigin(sprite->getLocalBounds().width / 2.f, sprite->getLocalBounds().height / 2.f);

  idleAnim = new Animation(0.05f, 5, 0, 5, 16, 16, sprite);
  runAnim = new Animation(0.08f, 6, 0, 5, 16, 16, sprite);
  //circle->setRadius(2.f);
  //circle->setFillColor(sf::Color::Green);
  //circle->setOutlineColor(sf::Color::Green);
=======
Character::Character(const char* textureUrl, sf::Vector2f position, float scale, float width,
float height, int col, int row, float moveSpeed, sf::RenderWindow*& window, b2World*& world) :
GameObject(textureUrl, position, scale, width, height, col, row, b2BodyType::b2_dynamicBody, window, world)
{
  this->moveSpeed = moveSpeed;

  rigidbody->FreezeRotation(true);

  idleAnim = new Animation(0.05f, 5, 0, 5, 16, 16, drawable);
  runAnim = new Animation(0.08f, 6, 0, 5, 16, 16, drawable);
>>>>>>> development
}

Character::~Character()
{
}

<<<<<<< HEAD
void Character::Draw()
{
  window->draw(*sprite);
  //circle->setPosition(sprite->getPosition());
  //window->draw(*circle);
}

void Character::Movement(float& deltaTime)
{
  sprite->move(InputSystem::GetAxis() * deltaTime * moveSpeed);
  FlipSprite();
  //si estoy pulsando las teclas de movimiento ?
=======
void Character::Update(float& deltaTime)
{
  GameObject::Update(deltaTime);

  Movement(deltaTime);
  FlipSprite();

>>>>>>> development
  if(std::abs(InputSystem::GetAxis().x) > 0 || std::abs(InputSystem::GetAxis().y) > 0)
  {
    runAnim->Play(deltaTime);
  }
<<<<<<< HEAD
  else //si no me estoy moviendo
=======
  else
>>>>>>> development
  {
    idleAnim->Play(deltaTime);
  }
}

<<<<<<< HEAD
void Character::FlipSprite()
{
  sprite->setScale(InputSystem::GetAxis().x < 0.f ? -scale : 
  InputSystem::GetAxis().x > 0.f ? scale :
  sprite->getScale().x, sprite->getScale().y);
=======
void Character::Movement(float& deltaTime)
{
  rigidbody->MoveBody(new b2Vec2(InputSystem::GetAxis().x * moveSpeed,
  InputSystem::GetAxis().y * moveSpeed));
}

void Character::FlipSprite()
{
  drawable->GetSprite()->setScale(InputSystem::GetAxis().x < 0.f ? -drawable->GetScale() :
  InputSystem::GetAxis().x > 0.f ? drawable->GetScale() :
  drawable->GetSprite()->getScale().x, drawable->GetSprite()->getScale().y);
>>>>>>> development
}