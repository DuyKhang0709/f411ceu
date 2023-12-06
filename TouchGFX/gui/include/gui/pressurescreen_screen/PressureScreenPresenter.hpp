#ifndef PRESSURESCREENPRESENTER_HPP
#define PRESSURESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PressureScreenView;

class PressureScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PressureScreenPresenter(PressureScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~PressureScreenPresenter() {}
    virtual void setPressure(int Val);
private:
    PressureScreenPresenter();

    PressureScreenView& view;
};

#endif // PRESSURESCREENPRESENTER_HPP
