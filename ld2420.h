#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"
#include "esphome/core/log.h"

namespace esphome {
namespace ld2420 {

class LD2420 : public PollingComponent, public uart::UARTDevice {
 public:
  explicit LD2420(uart::UARTComponent *parent) : uart::UARTDevice(parent) {}

  void setup() override;
  void update() override;

 protected:
  void parse_data_(const std::string &data);
};

}  // namespace ld2420
}  // namespace esphome
