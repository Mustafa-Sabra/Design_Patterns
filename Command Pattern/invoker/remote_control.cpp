#include "remote_control.hpp"

RemoteControl::RemoteControl()
{
    std::cout << "RemoteControl created" << std::endl;
    onCommands = new Command *[7];
    offCommands = new Command *[7];
    undoCommand = nullptr;

    for (int i = 0; i < 7; i++)
    {
        onCommands[i] = nullptr;
        offCommands[i] = nullptr;
    }
}
void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}
void RemoteControl::onButtonPressed(int index)
{
    onCommands[index]->execute();
    undoCommand = onCommands[index];
}
void RemoteControl::offButtonPressed(int index)
{
    offCommands[index]->execute();
    undoCommand = offCommands[index];
}

void RemoteControl::undoButtonPressed(void)
{
    if (undoCommand != nullptr)
    {
        undoCommand->undo();
    }
}