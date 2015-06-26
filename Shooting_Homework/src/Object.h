
#pragma once
#include "common.h"

class Object
{
protected:
  Texture my_tex_;

  Vec2f pos_;
  Vec2f size_;
  Vec2f cut_size_;
  Vec2f speed_;

  float direction_;
  float angle_;

public:
  Object();
  virtual ~Object() = default;

  Vec2f getPos();
  Vec2f getSize();
  Vec2f getDirection();

  virtual void update() = 0;
  virtual void draw() = 0;
};

