
#include "effect.h"

class Invertion : public Effect {

public:
	void makeEffect() override {

		
		sf::Color white = sf::Color::White;
		for (int x = 0; x < e_image_.getImage().getSize().x; x++) {

			for (int y = 0; y < e_image_.getImage().getSize().y; y++) {

				sf::Color color;
				color.a = white.a;
				color.b = white.b - e_image_.getImage().getPixel(x, y).b;
				color.r = white.r - e_image_.getImage().getPixel(x, y).r;
				color.g = white.g - e_image_.getImage().getPixel(x, y).g;

				e_image_.getImage().setPixel(x, y, color);

			}
		}
	}
	~Invertion(){};
};