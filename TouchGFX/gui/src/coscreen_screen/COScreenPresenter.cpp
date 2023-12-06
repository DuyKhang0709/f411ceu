#include <gui/coscreen_screen/COScreenView.hpp>
#include <gui/coscreen_screen/COScreenPresenter.hpp>

COScreenPresenter::COScreenPresenter(COScreenView& v)
    : view(v)
{

}

void COScreenPresenter::activate()
{

}

void COScreenPresenter::deactivate()
{

}

void COScreenPresenter::setCO(int Val)
{
	view.setCO(Val);
}
