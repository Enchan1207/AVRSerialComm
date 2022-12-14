//
// USARTインタフェース (リッチな型変換)
//
#include <stdio.h>

#include "usart_base.hpp"

namespace usart {

size_t BaseUSART::print(const char* const str) {
    return write(str);
}

size_t BaseUSART::print(unsigned char value) {
    const size_t bufferSize = 8;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%d", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::print(int value) {
    const size_t bufferSize = 16;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%d", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::print(unsigned int value) {
    const size_t bufferSize = 16;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%u", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::print(double value) {
    const size_t bufferSize = 32;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%lf", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::print(long value) {
    const size_t bufferSize = 32;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%ld", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::print(unsigned long value) {
    const size_t bufferSize = 32;
    char buf[bufferSize] = {0};
    int writtenCharLength = snprintf(buf, bufferSize, "%lu", value);
    if (writtenCharLength < 0 || (size_t)writtenCharLength >= bufferSize) {
        return 0;
    }
    write(buf);
    return bufferSize;
}

size_t BaseUSART::println(const char* const str) {
    return write(str) + write("\r\n");
}

size_t BaseUSART::println(unsigned char value) {
    return print(value) + write("\r\n");
}

size_t BaseUSART::println(int value) {
    return print(value) + write("\r\n");
}

size_t BaseUSART::println(unsigned int value) {
    return print(value) + write("\r\n");
}

size_t BaseUSART::println(double value) {
    return print(value) + write("\r\n");
}

size_t BaseUSART::println(long value) {
    return print(value) + write("\r\n");
}

size_t BaseUSART::println(unsigned long value) {
    return print(value) + write("\r\n");
}

}  // namespace usart
