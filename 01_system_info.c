#include "learnuv.h"

int main() {
  int err;

  double uptime;
  err = uv_uptime(&uptime);
  CHECK(err, "uv_uptime");
  log_info("Uptime: %f", uptime);
  log_report("Uptime: %f", uptime);

  size_t resident_set_memory;
  err = uv_resident_set_memory(&resident_set_memory);
  CHECK(err, "uv_resident_set_size");
  log_info("RSS: %zd\n", resident_set_memory);
  log_report("RSS: %ld\n", resident_set_memory);

  return 0;
}
