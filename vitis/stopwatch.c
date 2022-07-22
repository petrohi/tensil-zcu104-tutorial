/* SPDX-License-Identifier: Apache-2.0 */
/* Copyright © 2019-2022 Tensil AI Company */

#include "stopwatch.h"

#include <math.h>

tensil_error_t stopwatch_start(struct stopwatch *stopwatch) {
    XTime_GetTime(&stopwatch->start);
    return TENSIL_ERROR_NONE;
}

void stopwatch_stop(struct stopwatch *stopwatch) {
    XTime_GetTime(&stopwatch->end);
}

#define US_PER_SECOND 1000000.0

float stopwatch_elapsed_us(const struct stopwatch *stopwatch) {
    return ((float)(stopwatch->end - stopwatch->start) /
            ((float)COUNTS_PER_SECOND / US_PER_SECOND));
}

float stopwatch_elapsed_seconds(const struct stopwatch *stopwatch) {
    return ((float)(stopwatch->end - stopwatch->start) /
            (float)COUNTS_PER_SECOND);
}