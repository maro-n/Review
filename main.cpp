
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"


enum Window {
  WIDTH  = 512,
  HEIGHT = 512
};

struct float5{
	float x;
	float y;
	float v;
	float width;
	float height;
};

class Player{
private:
	float5 Info;

public:
	Player(){
		Info.x = 0;
		Info.y = 0;
		Info.v = 2.f;
		Info.width = 256;
		Info.height = 128;
	}

	enum direction{
		right,
		left,
	};

	bool Player_Direction = right;

	void Hit_Wall(){
		const float	limit_left  =  Window::WIDTH * 0.5 - Info.width;
		const float limit_right = -Window::WIDTH * 0.5;
		const float limit_up    =  Window::HEIGHT * 0.5 - Info.height;
		const float limit_down  = -Window::HEIGHT * 0.5;

		if (Info.x > limit_left){
			Info.x = limit_left;
		}
		if (Info.x < limit_right){
			Info.x = limit_right;
		}
		if (Info.y > limit_up){
			Info.y = limit_up;
		}
		if (Info.y < limit_down){
			Info.y = limit_down;
		}
	}

	void MovePlayer(AppEnv& env){
		if (env.isPressKey('A')){
			Info.x -= Info.v;
			Player_Direction = left;
		}
		if (env.isPressKey('S')){
			Info.y -= Info.v;
		}
		if (env.isPressKey('D')){
			Info.x += Info.v;
			Player_Direction = right;
		}
		if (env.isPressKey('W')){
			Info.y += Info.v;
		}
	}
	
	void Draw(Texture& player_img){
		int p_direction;

		enum cut{
			right_player = 0,
			left_player = 128,
		};

		if (Player_Direction == right){
			p_direction = cut::right_player;
		}
		if (Player_Direction == left){
			p_direction = cut::left_player;
		}
			drawTextureBox(Info.x, Info.y, Info.width, Info.height,
				0, p_direction, Info.width, Info.height,
				player_img,
				Color(1, 1, 1));
	}
};

int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  env.bgColor(Color(1, 1, 1));
  Texture player_img("res/player_img.png");
  Player player_;

  while (env.isOpen()) {

	player_.MovePlayer(env);
	player_.Hit_Wall();

    env.setupDraw();

	player_.Draw(player_img);

    env.update();
  }
}
