#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CBouncingBall.h"
#include <stdlib.h>
#include "Dice.h"

namespace game_framework {

	Dice::Dice() {
		_point = 0;
	}

	int Dice::throwTheDice() {
		_point = rand();
		return _point;
	}
}