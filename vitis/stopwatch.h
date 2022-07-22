/* SPDX-License-Identifier: Apache-2.0 */
/* Copyright © 2019-2022 Tensil AI Company */

#pragma once

#include "tensil/error.h"

#include "xtime_l.h"

struct stopwatch {
    XTime start;
    XTime end;
};

tensil_error_t stopwatch_start(struct stopwatch *stopwatch);

void stopwatch_stop(struct stopwatch *stopwatch);

float stopwatch_elapsed_us(const struct stopwatch *stopwatch);

float stopwatch_elapsed_seconds(const struct stopwatch *stopwatch);
