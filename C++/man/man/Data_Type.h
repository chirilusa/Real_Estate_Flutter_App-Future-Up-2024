#pragma once

typedef enum ButtonState
{
	Off = 0,
	LowBeam,	// 1
	HighBeam,	// 2
	Automatic	// 3
};
typedef enum LightsState
{
	LEDOff = 0,
	LowBeamLED,	// 1
	HighBeamLED,	// 2
	AutomaticLED	// 3
};
typedef enum DisplayState
{
	None=0,
	Green,
	Blue
};
