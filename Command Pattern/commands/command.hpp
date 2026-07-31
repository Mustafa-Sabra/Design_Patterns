#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>
#include "../devices/devices.hpp"

class Command
{

public:
    virtual void execute(void) = 0;
    virtual void undo(void) = 0;
    virtual ~Command();
};

/******************************************************/
class LightOnCommand : public Command
{
private:
    Light *light;
    int prevState;

public:
    LightOnCommand(Light *light);
    void execute(void) override;
    virtual void undo(void) override;
    ~LightOnCommand();
};
/***************************************************** */
class LightOffCommand : public Command
{
private:
    Light *light;
    int prevState;

public:
    LightOffCommand(Light *light);
    void execute(void) override;
    virtual void undo(void) override;
    ~LightOffCommand();
};
/*********************************************************** */
class LightDimCommand : public Command
{
private:
    Light *light;
    int prevState;

public:
    LightDimCommand(Light *light);
    void execute(void) override;
    virtual void undo(void) override;
    ~LightDimCommand();
};
/***************************************************************/
class StereoOnCommand : public Command
{

private:
    Stereo *stereo;

public:
    StereoOnCommand(Stereo *stereo);
    void execute(void) override;
    virtual void undo(void) override;
    ~StereoOnCommand();
};
/*****************************************************************/
class StereoOffCommand : public Command
{
private:
    Stereo *stereo;

public:
    StereoOffCommand(Stereo *stereo);
    void execute(void) override;
    virtual void undo(void) override;
    ~StereoOffCommand();
};
/****************************************************************/
class StereoSetCDCommand : public Command
{
private:
    Stereo *stereo;
    std::string cd;

public:
    StereoSetCDCommand(Stereo *stereo, std::string cd);
    void execute(void) override;
    virtual void undo(void) override;
    ~StereoSetCDCommand();
};
/****************************************************** */
class MacroCommand : public Command
{
private:
    Command **commands;
    int numCommands;

public:
    MacroCommand(Command **commands, int numCommands);
    void execute(void) override;
    void undo(void) override;
    ~MacroCommand();
};

#endif