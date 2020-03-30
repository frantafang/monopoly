#pragma once
namespace game_framework {
	class Dice {
	public:
		Dice();
		int throwTheDice();
	private:
		int _point;
		int _weight;
		//int cheat();
		//int throwTheDice();

	};
}
