
#include "Player.h"

Player::Player(){
  my_tex_ = Texture("res/player.png");

  pos_ = Vec2f::Zero();
  size_ = Vec2f(50, 50);
  cut_size_ = Vec2f();
  speed_ = Vec2f(1.0f, 1.0f);

}

void Player::update(){

}

void Player::draw(){

}
