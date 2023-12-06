#ifndef CLOCKSCREENVIEW_HPP
#define CLOCKSCREENVIEW_HPP

#include <gui_generated/clockscreen_screen/ClockScreenViewBase.hpp>
#include <gui/clockscreen_screen/ClockScreenPresenter.hpp>

class ClockScreenView : public ClockScreenViewBase
{
public:
    ClockScreenView();
    virtual ~ClockScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void updateTime(char Hour,char Minute,char Second);
protected:
};

#endif // CLOCKSCREENVIEW_HPP
