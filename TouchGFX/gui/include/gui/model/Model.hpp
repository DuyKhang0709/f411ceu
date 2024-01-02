#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
    float Pressure_Val;
    int Temperature_Val;
    float CO_Val;
    unsigned char Hour ;
    unsigned char Minute ;
    unsigned char Second ;
    int tickCounter;
};

#endif // MODEL_HPP
