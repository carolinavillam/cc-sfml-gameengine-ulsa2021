#include "Animation.hh"

<<<<<<< HEAD
Animation:: Animation(float delay, int row,int startFrame, int endFrame, float width, float height, sf::Sprite*& sprite)
=======
Animation:: Animation(float delay, int row,int startFrame, int endFrame, float width, float height, Drawable*& drawable)
>>>>>>> development
{
  this->delay = delay;
  this->row = row;
  this->startFrame = startFrame;
  this->endFrame = endFrame;
  this->width = width;
  this->height = height;
  currentFrame = startFrame;
<<<<<<< HEAD
  this->sprite = sprite;
=======
  this->drawable = drawable;
>>>>>>> development
}

Animation::~Animation()
{
}

void Animation::Play(float& deltaTime)
{
  timer += deltaTime;
  if(timer >= delay)
  {
<<<<<<< HEAD
    sprite->setTextureRect(sf::IntRect(currentFrame * width, row * height, width, height));
=======
    drawable->RebindRect(currentFrame * width, row * height, width, height);
>>>>>>> development
    //cambiar de frame
    timer = 0.f;
    if(currentFrame < endFrame)
    {
      currentFrame++;
    }
    else
    {
      currentFrame = startFrame;
    }
  }
}