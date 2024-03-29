#pragma config(Sensor, S3,     ColorSensor,    sensorCOLORFULL)
#pragma config(Sensor, S4,     SonarSensor,    sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "common.c"

void FollowTheBlackLine() {
	while(true) {
		if (SensorValue[ColorSensor] == BLACKCOLOR) {
			motor[motorB] = 40;
			motor[motorC] = 10;
		} else {
			motor[motorB] = 10;
			motor[motorC] = 40;
		}
	}
	motor[motorB] = 0;
	motor[motorC] = 0;
}

task main()
{
	ForwardMs(1000);
	FollowTheBlackLine();
}
