
#pragma once
#include "../man/Data_Type.h"

class Button
{
public:

	ButtonState GetState() const { return state; }
	void SetState(const ButtonState bt_state) { state = bt_state; }

protected:
	ButtonState state;
};