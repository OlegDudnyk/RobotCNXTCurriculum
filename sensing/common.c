void ForwardMs(int time) {
	motor[motorB] = 100;
	motor[motorC] = 100;
	wait1Msec(time);
}
