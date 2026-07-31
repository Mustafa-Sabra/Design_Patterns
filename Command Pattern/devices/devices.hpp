#ifndef DEVICES_HPP
#define DEVICES_HPP

#include <iostream>
#include <string>

class Light
{
private:
    std::string name;
    int lightState;

public:
    int lightOn = 1;
    int lightOff = 2;
    int lightDim = 3;

public:
    Light(std::string name);
    void on(void);
    void off(void);
    void dim(void);
    int getLightState(void);
    ~Light();
};

class Stereo
{
private:
    std::string name;

public:
    Stereo(std::string name);
    void on(void);
    void off(void);
    void setCD(void);
    void setDVD(void);
    void setRadio(void);
    void setVolume(void);
    ~Stereo();
};

#endif