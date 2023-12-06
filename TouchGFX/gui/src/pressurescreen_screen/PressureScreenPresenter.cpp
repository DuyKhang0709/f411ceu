#include <gui/pressurescreen_screen/PressureScreenView.hpp>
#include <gui/pressurescreen_screen/PressureScreenPresenter.hpp>

PressureScreenPresenter::PressureScreenPresenter(PressureScreenView& v)
    : view(v)
{

}

void PressureScreenPresenter::activate()
{

}

void PressureScreenPresenter::deactivate()
{

}
void PressureScreenPresenter::setPressure(int Val)
{
	view.setPressure(Val);
}
