#include <gui/clockscreen_screen/ClockScreenView.hpp>

ClockScreenView::ClockScreenView()
{

}

void ClockScreenView::setupScreen()
{
    ClockScreenViewBase::setupScreen();
}

void ClockScreenView::tearDownScreen()
{
    ClockScreenViewBase::tearDownScreen();
}

void ClockScreenView::updateTime(char Hour, char Minute, char Second)
{
	Clock.setTime24Hour(Hour, Minute, Second);
}
