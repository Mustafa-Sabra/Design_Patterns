

#include "devices.hpp"

Light::Light(std::string name)
{
    lightState = lightOff;
    this->name = name;
}
Light::~Light()
{
    std::cout << "Light " << name << " destroyed" << std::endl;
}

void Light::on(void)
{
    lightState = lightOn;
    std::cout << "Light " << name << " turned on" << std::endl;
}
void Light::off(void)
{
    lightState = lightOff;
    std::cout << "Light " << name << " turned off" << std::endl;
}

void Light::dim(void)
{
    lightState = lightDim;
    std::cout << "Light " << name << " dimmed" << std::endl;
}
int Light::getLightState(void)
{
    return lightState;
}
/**************************************************************/
Stereo::Stereo(std::string name)
{
    this->name = name;
}
void Stereo::on(void)
{
    std::cout << "Stereo " << name << " turned on" << std::endl;
}
void Stereo::off(void)
{
    std::cout << "Stereo " << name << " turned off" << std::endl;
}
void Stereo::setCD(void)
{
    std::cout << "Stereo " << name << " CD set" << std::endl;
}
void Stereo::setDVD(void)
{
    std::cout << "Stereo " << name << " DVD set" << std::endl;
}
void Stereo::setRadio(void)
{
    std::cout << "Stereo " << name << " Radio set" << std::endl;
}
void Stereo::setVolume(void)
{
    std::cout << "Stereo " << name << " Volume set" << std::endl;
}
Stereo::~Stereo()
{
    std::cout << "Stereo " << name << " destroyed" << std::endl;
}