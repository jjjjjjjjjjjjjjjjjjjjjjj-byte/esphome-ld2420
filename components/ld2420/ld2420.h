#pragma once

#include "esphome.h"

class LD2420 : public PollingComponent, public UARTDevice {
 public:
  LD2420(UARTComponent *parent) : PollingComponent(15000), UARTDevice(parent) {}

  void setup() override;
  void loop() override;
  void update() override;
};


