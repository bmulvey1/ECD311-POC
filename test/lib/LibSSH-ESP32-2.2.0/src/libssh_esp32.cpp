// ESP32 libssh port.
//
// Ewan Parker, created 18th April 2020.
// Arduino library interface needed to link compile and link libssh with ESP32.
//
// Copyright (C) 2020–2021 Ewan Parker.

#include "libssh_esp32.h"

extern "C"
{
  void libssh_constructor();
}

void libssh_begin(void)
{
  libssh_constructor();
}
