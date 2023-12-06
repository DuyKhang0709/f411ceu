#ifndef COSCREENVIEW_HPP
#define COSCREENVIEW_HPP

#include <gui_generated/coscreen_screen/COScreenViewBase.hpp>
#include <gui/coscreen_screen/COScreenPresenter.hpp>

class COScreenView : public COScreenViewBase
{
public:
    COScreenView();
    virtual ~COScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setCO(int Val);
protected:
};

#endif // COSCREENVIEW_HPP
