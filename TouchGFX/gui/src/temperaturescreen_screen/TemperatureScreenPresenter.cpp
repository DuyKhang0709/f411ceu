#include <gui/temperaturescreen_screen/TemperatureScreenView.hpp>
#include <gui/temperaturescreen_screen/TemperatureScreenPresenter.hpp>

TemperatureScreenPresenter::TemperatureScreenPresenter(TemperatureScreenView& v)
    : view(v)
{

}

void TemperatureScreenPresenter::activate()
{

}

void TemperatureScreenPresenter::deactivate()
{

}
void TemperatureScreenPresenter::setTemperature(int Temperature_Val)
{
	view.setTemperature(Temperature_Val);
}
