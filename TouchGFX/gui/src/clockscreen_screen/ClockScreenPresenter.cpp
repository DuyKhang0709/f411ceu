#include <gui/clockscreen_screen/ClockScreenView.hpp>
#include <gui/clockscreen_screen/ClockScreenPresenter.hpp>

ClockScreenPresenter::ClockScreenPresenter(ClockScreenView& v)
    : view(v)
{

}

void ClockScreenPresenter::activate()
{

}

void ClockScreenPresenter::deactivate()
{

}
void ClockScreenPresenter::updateTime(char Hour,char Minute,char Second)
{
	view.updateTime(Hour,Minute,Second);
}
