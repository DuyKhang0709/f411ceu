#include <gui/coscreen_screen/COScreenView.hpp>

COScreenView::COScreenView()
{

}

void COScreenView::setupScreen()
{
    COScreenViewBase::setupScreen();
}

void COScreenView::tearDownScreen()
{
    COScreenViewBase::tearDownScreen();
}

void COScreenView::setCO(int Val)
{
	Unicode::snprintf(CODataBuffer, CODATA_SIZE, "%d",Val);
	COGauge.updateValue(Val, 30); // animates needle and arc to new value with a duration of 30 ticks
	COGauge.invalidate();
}
