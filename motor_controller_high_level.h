/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _MOTOR_CONTROLLER_HIGH_LEVEL_H_
#define _MOTOR_CONTROLLER_HIGH_LEVEL_H_

#include "main.h"

#define MOTOR_CONTROLLER_ERROR_EMPTY 0x0
#define MOTOR_CONTROLLER_ERROR_01_THROTTLE 0x22
#define MOTOR_CONTROLLER_ERROR_02 0x23
#define MOTOR_CONTROLLER_ERROR_03 0x24
#define MOTOR_CONTROLLER_ERROR_04 0x26
#define MOTOR_CONTROLLER_ERROR_05 0x28
#define MOTOR_CONTROLLER_ERROR_06_SHORT_CIRCUIT 0x21
#define MOTOR_CONTROLLER_ERROR_91_BATTERY_UNDER_VOLTAGE 0x91

void motor_controller_high_level (void);
void motor_battery_voltage_protection (void);
uint8_t motor_get_ADC_battery_voltage_filtered (void);
void motor_speed_controller_set_erps (uint16_t erps);
void motor_controller_set_error (uint8_t error);
void motor_controller_clear_error (uint8_t error);
uint8_t motor_controller_get_error (void);
// call every 100ms
void motor_speed_controller (void);

#endif /* _MOTOR_CONTROLLER_HIGH_LEVEL_H_ */
