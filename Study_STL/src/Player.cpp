
#include "Player.h"

cPlayer::cPlayer(){
  pos = Vec2f(0, 0);
  rotate = Vec2f(0, 0);
}

void cPlayer::setup(){
  player_image = loadImage(loadAsset("player.png"));
}

void cPlayer::update(){

}

void cPlayer::draw(){
  player_image.bind();
  gl::draw(player_image);
  player_image.unbind();
}
