#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include <iostream>
#include "../commands/command.hpp"

class RemoteControl
{

private:
    Command **onCommands;
    Command **offCommands;
    Command *undoCommand;

public:
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonPressed(int index);
    void offButtonPressed(int index);
    void undoButtonPressed(void);
};

#endif // REMOTE_CONTROL_HPP