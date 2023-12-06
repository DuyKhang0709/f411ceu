#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>
class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void setPressure(int Val){};
    virtual void setTemperature(int Temperature_Val){};
    virtual void setCO(int Val){};
    virtual void updateTime(char Hour,char Minute,char Second){};
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
