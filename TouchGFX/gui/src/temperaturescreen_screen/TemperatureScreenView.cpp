#include <gui/temperaturescreen_screen/TemperatureScreenView.hpp>

TemperatureScreenView::TemperatureScreenView()
{

}

void TemperatureScreenView::setupScreen()
{
    TemperatureScreenViewBase::setupScreen();
}

void TemperatureScreenView::tearDownScreen()
{
    TemperatureScreenViewBase::tearDownScreen();
}

void TemperatureScreenView::setTemperature(int Temperature_Val)
{
	Unicode::snprintf(TemperatureDataBuffer, TEMPERATUREDATA_SIZE, "%d",Temperature_Val);
	TemperatureGauge.updateValue(Temperature_Val, 30); // animates needle and arc to new value with a duration of 30 ticks
	TemperatureGauge.invalidate();
}
