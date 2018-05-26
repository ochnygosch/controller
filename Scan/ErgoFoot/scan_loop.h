#pragma once

#include <stdint.h>

void Scan_setup();
void Scan_poll();

uint8_t Scan_periodic();

void Scan_finishedWithMacro( uint8_t sentKeys );
void Scan_finishedWithOutput( uint8_t sentKeys );

void Scan_currentChange( unsigned int current );
