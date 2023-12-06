#ifndef PRESSURESCREENVIEW_HPP
#define PRESSURESCREENVIEW_HPP

#include <gui_generated/pressurescreen_screen/PressureScreenViewBase.hpp>
#include <gui/pressurescreen_screen/PressureScreenPresenter.hpp>

class PressureScreenView : public PressureScreenViewBase
{
public:
    PressureScreenView();
    virtual ~PressureScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setPressure(int Val);
protected:
    int tickCounter;
};

#endif // PRESSURESCREENVIEW_HPP
