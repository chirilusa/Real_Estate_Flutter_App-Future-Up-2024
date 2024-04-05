#pragma once
#include "../man/Data_Type.h"

class Lights
{
public:

	LightsState GetState() const { return state; }
	void SetState(const LightsState lgt_state) { state = lgt_state; }

protected:
	LightsState state;
};