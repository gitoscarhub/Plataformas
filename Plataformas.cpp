#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

using namespace sf;
Texture fondo;
Texture plat;
Sprite bkg;
Sprite escalera;
Sprite escalera1,escalera2,escalera3,escalera4,escalera5,escalera6,escalera7;

int main(){
	sf::Vector2f targetSize(770.0f, 512.0f);
	bkg.setScale(
		targetSize.x / bkg.getLocalBounds().width,
		targetSize.y / bkg.getLocalBounds().height);
	fondo.loadFromFile("fondo.jpg");
	plat.loadFromFile("plataforma.jpg");

	bkg.setTexture(fondo);
	bkg.setPosition(0, 0);
	escalera.setTexture(plat);
	escalera1.setTexture(plat);
	escalera2.setTexture(plat);
	escalera3.setTexture(plat);
	escalera4.setTexture(plat);
	escalera5.setTexture(plat);
	escalera6.setTexture(plat);
	escalera7.setTexture(plat);

	escalera.setPosition(36, 476);
	escalera1.setPosition(108, 412);
	escalera2.setPosition(180, 362);
	escalera3.setPosition(252, 312);
	escalera4.setPosition(324, 262);
	escalera5.setPosition(386, 212);
	escalera6.setPosition(458, 162);
	escalera7.setPosition(505, 160);

	escalera.setTextureRect(sf::IntRect(36, 50, 36, 50));
	escalera1.setTextureRect(sf::IntRect(36, 100, 36, 100));
	escalera2.setTextureRect(sf::IntRect(36, 150, 36, 150));
	escalera3.setTextureRect(sf::IntRect(36, 200, 36, 200));
	escalera4.setTextureRect(sf::IntRect(36, 250, 36, 250));
	escalera5.setTextureRect(sf::IntRect(36, 300, 36, 300));
	escalera6.setTextureRect(sf::IntRect(36, 350, 36, 350));
	escalera7.setTextureRect(sf::IntRect(250, 36, 250, 36));
	sf::RenderWindow App(sf::VideoMode(770, 512, 32),
		"Plataforma escalonada con fondo");

	while (App.isOpen()){

		App.clear();
		App.draw(bkg);
		App.draw(escalera);
		App.draw(escalera1);
		App.draw(escalera2);
		App.draw(escalera3);
		App.draw(escalera4);
		App.draw(escalera5);
		App.draw(escalera6);
		App.draw(escalera7);
		App.display();
	}
	return 0;
}
