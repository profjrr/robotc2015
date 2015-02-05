#pragma config(Sensor, S3,     ev3color,       sensorEV3_Color)
#pragma config(Sensor, S4,     sonarev3,       sensorEV3_Ultrasonic, modeEV3Ultrasonic_Inch)
#pragma config(Motor,  motorB,          leftMotorB,    tmotorCV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotorC,   tmotorCV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//
//Line Follower Programming Guide (ROBOTC�): Part 3
//Introduction:
//In this guide, the Ranger Bot will be programmed to move forward until it senses a black line. Upon sensing the black line, it will
//pause and then turn until it is off the line. It will then follow the line by continuously turning left and right. This guide is for use
//with the ROBOTC� programming language.
//Getting Started:
//1. To start, open the program from Line Follower Extension Part 2. It should look similar to the code given below. Beside the
//variables, there are two slashes (//) followed by what that variable is representing. These mark a comment. Notice that
//comments appear in green when code is typed into ROBOTC.
//Note: A comment is not part of the code that the NXT brick will execute, but it helps the programmer by allowing the addition
//of notes to describe what has been done.
//Line Follower Extension Part 2 Code:
//
task main()
{
	int dValue = 15; // Motor Power
	int threshold = 50; // light sensor threshold
	int mValue = 30;
	while(SensorValue(ev3color) > threshold)
	{
		motor[motorB]= dValue;
		motor[motorC]= dValue;
	}
	motor[motorB]= 0;
	motor[motorC]= 0;
	wait1Msec(500);
	while(SensorValue(ev3color) < threshold)
	{
		motor[motorB] = mValue;
		motor[motorC] = mValue*(-1);
	}
	motor[motorB]= 0;
	motor[motorC]= 0;
	while(true){
		if(SensorValue(ev3color) < threshold)
		{
			motor[motorB] = mValue;
			motor[motorC] = 0;
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = mValue;
		}

	}
}// end task main()
//
//2. At the end of the previous code, before the final closing brace, add a While Loop to make the containing code execute
//forever. Follow this with an opening brace.
//while(true)
//{
//TETRIX� Getting Started Guide Extensions
//97
//3. Add a conditional statement which compares the light sensor�s value to the threshold value of 50. When the light sensor�s
//value is less than 50, the robot is sensing the black line. Follow this statement with an opening brace.
//if(SensorValue(ev3color) < threshold)
//{
//4. Type the Motor Power function and set motorB to a power of 30 using the mValue variable.
//motor[motorB] = mValue;
//5. Type the Motor Power function and set motorC to a power of 0.
//motor[motorC] = 0;
//6. Add a closing brace to end the conditional statement and add an �else� condition for when the robot is not sensing the black
//line. This code will only execute if the light sensor�s value is greater than or equal to the threshold value. Follow this with an
//opening brace.
//}
//else
//{
//7. Type the Motor Power function and set motorB to a power of 0.
//motor[motorB] = 0;
//8. Type the Motor Power function and set motorC to a power of 30 using the mValue variable.
//motor[motorC] = mValue;
//Ending the Program:
//9. Add a closing brace to end the "else" condition.
//}
//10. Add a closing brace to end the While Loop.
//}
//Line Follower Programming Guide (ROBOTC�): Part 3
//Extensions TETRIX� Getting Started Guide
//new guide+++++++++++++++++++++++++++++++++++++++++++++++++++
//98
//Line Follower Programming Guide (ROBOTC�): Part 3
//Completed Code:
//task main()
//{
//int mValue = 30; // Motor power
//int dValue = 15;
//int threshold = 50; // Light sensor threshold
//while(SensorValue(ev3color) > threshold) // while light sensor is seeing "white"
//{
//motor[motorB]= dValue; // Motor D is run at a 15 power level
//motor[motorC]= dValue; // Motor E is run at a 15 power level
//}
//motor[motorB]= 0; // Motor D is run at a 0 power level
//motor[motorC]= 0; // Motor E is run at a 0 power level
//wait1Msec(500); // Wait 0.5 seconds
//while(SensorValue(ev3color) < threshold) // while light sensor is seeing "black"
//{
//motor[motorB] = mValue; // Motor D is run at a 30 power level
//motor[motorC] = mValue*(-1); // Motor E is run at a 30 power level in the reverse direction
//}
//motor[motorB]= 0; // Motor D is run at a 0 power level
//motor[motorC]= 0; // Motor E is run at a 0 power level
//while(true)
//{
//if(SensorValue[ev3color] < threshold) // If the Light Sensor reads a value less than 50
//{
//motor[motorB] = mValue; // Motor D is run at a 30 power level
//motor[motorC] = 0; // Motor E is run at a 0 power level
//}
//else // If the Light Sensor reads a value greater than or equal to 50
//{
//motor[motorC] = mValue; // Motor E is run at a 30 power level
//motor[motorC] = 0; // Motor D is run at a 0 power level
//}
//}
//}
//TETRIX� Getting Started Guide Extensions

//}
