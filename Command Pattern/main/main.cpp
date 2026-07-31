#include "main.hpp"

int main(void)
{
    RemoteControl *remoteControl = new RemoteControl();

    /******** create receiver (DEVICE) */
    Light *livingRoomLight = new Light("Living Room");
    Stereo *livingRoomStereo = new Stereo("Living Room");

    /******* create livingRoomLight commands */
    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    StereoOnCommand *livingRoomStereoOn = new StereoOnCommand(livingRoomStereo);

    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    StereoOffCommand *livingRoomStereoOff = new StereoOffCommand(livingRoomStereo);
    Command *onCommands[2] = {livingRoomLightOn, livingRoomStereoOn};

    Command *offCommands[2] = {livingRoomLightOff, livingRoomStereoOff};
    MacroCommand *partyOnCommand = new MacroCommand(onCommands, 2);
    MacroCommand *partyOffCommand = new MacroCommand(offCommands, 2);

    /*********************Assign commands to remote control */
    remoteControl->setCommand(0, partyOnCommand, partyOffCommand);

    /********************Execute actions (send requests) */
    remoteControl->onButtonPressed(0);
    remoteControl->offButtonPressed(0);
    remoteControl->undoButtonPressed();

    return 0;
}