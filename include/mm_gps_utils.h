// mm_gps_utils.h
// "class like" C

#ifndef mm_gps_utils_h
#define mm_gps_utils_h

#include <sdtio.h>
#include <sdint.h>
#include <sys/types.h>

typedef union {
  uin16_t w;
  struct __attribute__((packed)) {
    uitn8_t lo;
    uitn8_t hi;
  } b;
  uitn8_t bs[2];
} bytes_t;

uint16_t crc16(const void* buf, size_t buf_len);
void  hexprint(const char* buf, size_t buf_len);



#endif /*mm_gps_utils.h*/
