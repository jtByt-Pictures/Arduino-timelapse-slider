/*
 * slider OS 2
 * for controlling a timelapse slider and triggering the Camera
 * with an arduino, 3 buttons, 2 7-segment-displays, stepper driver
 *
 * version 2.0.0 beta1 (19.10.2014)
 * Jannik Beyerstedt, Hamburg, Germany | http://jannikbeyerstedt.de | jtByt.Pictures@gmail.com
 * CC BY-NC-SA 3.0
 */

/*
  configurations file
*/


#ifndef __config_h__
#define __config_h__

// basic config
// --------------------

// define input pins
#define trigger 2
//#define servoTilt 3

#define buttonPlusPin  A1
#define buttonMinusPin A2
#define buttonEnterPin A0

// define output pins
#define shiftLatch   12
#define shiftClock    9
#define shiftData     8
#define ledPin       13
#define stepperStep   6
#define stepperDir    7
#define stepperSleep  4

// set mechanical properties
const int triggerDuration = 500;   // how long should your camera be triggered (exposure time is still set in camera)
const int maxSteps        = 4400;  // amount of steps to slide the slider along {my calue for half step: 2200}
const int maxVelocity     = 50;    // maximum number of steps per second you stepper motor can perform
#define INVERT_STEPPER_DIR         // invert stepper direction, that it matches your buttons (right button, slide right)


// advanced config
// --------------------

// define the maximum number displayed
const int numberLimitSlideTime = 30;    // maximum time input to slide (in minutes)
const int numberLimitTriggerTime = 10;  // maximum trigger interval time (in seconds)

// define the number os milliseconds to retrigger a count-up if button is held down
const int fastCountInterval = 150;

#define DEBUG_COM                 // enable detailed info for debugging
//#define NO_SERIAL_COM

// debug config
// --------------------
const int debounceDelay = 20;
const int readThreshold = 900;


#endif
