#ifndef COSCREENPRESENTER_HPP
#define COSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class COScreenView;

class COScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    COScreenPresenter(COScreenView& v);

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

    virtual ~COScreenPresenter() {}
    virtual void setCO(int Val);
private:
    COScreenPresenter();

    COScreenView& view;
};

#endif // COSCREENPRESENTER_HPP
