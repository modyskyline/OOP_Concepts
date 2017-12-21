/*
 * main.cpp
 *
 *  Created on: Oct 18, 2016
 *      Author: modys
 */

#include "ChainPattern.h"

int main()
{
	Logger* chainLogger = ChainPattern::getChainofLogger();
	chainLogger->logMessage(Logger::CONSOLE,"this is a console msg");
	chainLogger->logMessage(Logger::FILE,"this is a file msg");
	chainLogger->logMessage(Logger::ERROR,"this is an error msg");

	delete chainLogger;

	return(0);
}

