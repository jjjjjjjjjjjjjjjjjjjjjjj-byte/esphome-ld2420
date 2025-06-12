#include "ld2420.h"

namespace esphome {
namespace ld2420 {

static const char *const TAG = "ld2420";

void LD2420::setup() {
  ESP_LOGI(TAG, "LD2420 setup completed");
}

void LD2420::update() {
  while (this->available()) {
    std::string data;
    while (this->available()) {
      char c = this->read();
      data += c;
    }
    ESP_LOGD(TAG, "LD2420 UART data: %s", data.c_str());
    this->parse_data_(data);
  }
}

void LD2420::parse_data_(const std::string &data) {
  // Hier könnte echte Verarbeitung erfolgen
  ESP_LOGD(TAG, "Parsed data: %s", data.c_str());
}

}  // namespace ld2420
}  // namespace esphome
