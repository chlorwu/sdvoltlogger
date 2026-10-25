#pragma once
#include <stdint.h>

void adcSamplerBegin();
void adcSamplerStop();

const uint8_t * adcSamplerTakeBlock();

uint16_t adcSamplerOverruns();