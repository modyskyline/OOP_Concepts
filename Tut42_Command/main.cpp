/*
 * main.cpp
 *
 *  Created on: Oct 18, 2016
 *      Author: modys
 */
#include"command.h"
// The client
int main()
{
	// Receiver
	Light *light = new Light;

	// concrete Command objects
	LightOnCommand *lightOn = new LightOnCommand(light);
	LightOffCommand *lightOff = new LightOffCommand(light);

	// invoker objects
	RemoteControl *control = new RemoteControl;

	// execute
	control->setCommand(lightOn);
	control->buttonPressed();
	control->setCommand(lightOff);
	control->buttonPressed();

	delete light;
	delete lightOn;
	delete lightOff;
	delete control;

	return 0;
}

