
#include "pch.h"

// Unit Tests

// #1UB.SwV1.0 Unit Test Button SwC / 25.03.2024 / 1.0 / Future Up

TEST(ButtonUnitTest, GivenValue_ExpectedSameValue) {

	Button bt{};

	bt.SetState({ ButtonState::Off });
	EXPECT_EQ(bt.GetState(), ButtonState::Off);

	bt.SetState({ ButtonState::LowBeam });
	EXPECT_EQ(bt.GetState(), ButtonState::LowBeam);

	bt.SetState({ ButtonState::HighBeam });
	EXPECT_EQ(bt.GetState(), ButtonState::HighBeam);

	bt.SetState({ ButtonState::Automatic });
	EXPECT_EQ(bt.GetState(), ButtonState::Automatic);
}

TEST(LightUnitTest, GivenValue_ExpectedSameValue) {

	Lights lgt{};

	lgt.SetState({LightsState::LEDOff });
	EXPECT_EQ(lgt.GetState(), LightsState::LEDOff);

	lgt.SetState({ LightsState::LowBeamLED });
	EXPECT_EQ(lgt.GetState(), LightsState::LowBeamLED);

	lgt.SetState({ LightsState::HighBeamLED });
	EXPECT_EQ(lgt.GetState(), LightsState::HighBeamLED);

	lgt.SetState({ LightsState::AutomaticLED });
	EXPECT_EQ(lgt.GetState(), LightsState::AutomaticLED);
}

class ButtonTestFixture : public testing::TestWithParam<std::tuple<ButtonState, ButtonState>> {

};

INSTANTIATE_TEST_CASE_P( /* Note that in newer releases INSTANTIATE_TEST_SUITE_P is used */
	GivenValue_ExpectedSameValue_Inst,
	ButtonTestFixture,
	::testing::Values(std::make_tuple(ButtonState::Off, ButtonState::Off),
		std::make_tuple(ButtonState::LowBeam, ButtonState::LowBeam),
		std::make_tuple(ButtonState::HighBeam, ButtonState::HighBeam),
		std::make_tuple(ButtonState::Automatic, ButtonState::Automatic)));

TEST_P(ButtonTestFixture, GivenValue_ExpectedSameValue_Params) {
	EXPECT_EQ(std::get<0>(GetParam()), std::get<1>(GetParam()));

}