#include "command.hpp"
#include <iostream>

Command::~Command() = default;

LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
}
void LightOnCommand::execute()
{
    prevState = light->getLightState();

    light->on();
}
void LightOnCommand::undo()
{
    if (prevState == light->lightOn)
    {
        light->on();
    }
    else if (prevState == light->lightOff)
    {
        light->off();
    }
    else if (prevState == light->lightDim)
    {
        light->dim();
    }
}
LightOnCommand::~LightOnCommand()
{
    std::cout << "LightOnCommand destroyed" << std::endl;
}

/*******************************************************/
LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
}
void LightOffCommand::execute()
{
    prevState = light->getLightState();
    light->off();
}
void LightOffCommand::undo()
{
    if (prevState == light->lightOn)
    {
        light->on();
    }
    else if (prevState == light->lightOff)
    {
        light->off();
    }
    else if (prevState == light->lightDim)
    {
        light->dim();
    }
}
LightOffCommand::~LightOffCommand()
{
    std::cout << "LightOffCommand destroyed" << std::endl;
}
/*************************************************************** */

LightDimCommand::LightDimCommand(Light *light)
{
    this->light = light;
}
void LightDimCommand::execute()
{
    prevState = light->getLightState();
    light->dim();
}
void LightDimCommand::undo()
{
    // restore to full on by default
    if (prevState == light->lightOn)
    {
        light->on();
    }
    else if (prevState == light->lightOff)
    {
        light->off();
    }
    else if (prevState == light->lightDim)
    {
        light->dim();
    }
}
LightDimCommand::~LightDimCommand()
{
    std::cout << "LightDimCommand destroyed" << std::endl;
}
/*****************************************************************/

StereoOnCommand::StereoOnCommand(Stereo *stereo)
{
    this->stereo = stereo;
}
void StereoOnCommand::execute(void)
{
    stereo->on();
}
void StereoOnCommand::undo(void)
{
    stereo->off();
}
StereoOnCommand::~StereoOnCommand()
{
    std::cout << "StereoOnCommand destroyed" << std::endl;
}
/******************************************************************/
StereoOffCommand::StereoOffCommand(Stereo *stereo)
{
    this->stereo = stereo;
}
void StereoOffCommand::execute(void)
{
    stereo->off();
}
void StereoOffCommand::undo(void)
{
    stereo->on();
}
StereoOffCommand::~StereoOffCommand()
{
    std::cout << "StereoOffCommand destroyed" << std::endl;
}
/*******************************************************************/
MacroCommand::MacroCommand(Command **commands, int numCommands)
{
    this->commands = commands;
    this->numCommands = numCommands;
}
void MacroCommand::execute(void)
{
    for (int i = 0; i < numCommands; i++)
    {
        commands[i]->execute();
    }
}
void MacroCommand::undo(void)
{
    for (int i = 0; i < numCommands; i++)
    {
        commands[i]->undo();
    }
}
MacroCommand::~MacroCommand()
{
    std::cout << "macroCommand destroyed" << std::endl;
}