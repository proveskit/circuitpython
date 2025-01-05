// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Adafruit Industries LLC
//
// SPDX-License-Identifier: MIT

#include "supervisor/board.h"
#include "mpconfigboard.h"
#include "common-hal/microcontroller/Pin.h"
#include "shared-bindings/pwmio/PWMOut.h"

void board_init(void) {
	pwmio_pwmout_obj_t pwm;
	common_hal_pwmio_pwmout_construct(&pwm, &pin_GPIO21, 4096, 2, false);
	common_hal_pwmio_pwmout_never_reset(&pwm);
}
