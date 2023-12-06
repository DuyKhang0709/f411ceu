#include <gui/pressurescreen_screen/PressureScreenView.hpp>

PressureScreenView::PressureScreenView()
{

}

void PressureScreenView::setupScreen()
{
    PressureScreenViewBase::setupScreen();
}

void PressureScreenView::tearDownScreen()
{
    PressureScreenViewBase::tearDownScreen();
}

void PressureScreenView::setPressure(int Val)
{
	Unicode::snprintf(PressureDataBuffer, PRESSUREDATA_SIZE, "%d",Val);
	PressureGauge.updateValue(Val, 30); // animates needle and arc to new value with a duration of 30 ticks
	PressureData.invalidate();
}
