#ifndef TEMPERATURESCREENVIEW_HPP
#define TEMPERATURESCREENVIEW_HPP

#include <gui_generated/temperaturescreen_screen/TemperatureScreenViewBase.hpp>
#include <gui/temperaturescreen_screen/TemperatureScreenPresenter.hpp>

class TemperatureScreenView : public TemperatureScreenViewBase
{
public:
    TemperatureScreenView();
    virtual ~TemperatureScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setTemperature(int Temperature_Val);
protected:
};

#endif // TEMPERATURESCREENVIEW_HPP
