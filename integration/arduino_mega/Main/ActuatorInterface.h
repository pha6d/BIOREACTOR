/*
 * ActuatorInterface.h
 * This file defines an abstract interface for actuators, providing a standard way
 * to control various actuators in the project. This interface can be implemented
 * by any actuator class, such as a pump, motor, or any other device that needs
 * control functionality.
 */

#ifndef ACTUATORINTERFACE_H
#define ACTUATORINTERFACE_H

class ActuatorInterface {
public:
    /*
     * Pure virtual function to control the actuator.
     * @param state: Boolean indicating whether the actuator should be on or off.
     * @param value: Integer value to control the speed or intensity of the actuator.
     */
    virtual void control(bool state, int value) = 0;
};

#endif
