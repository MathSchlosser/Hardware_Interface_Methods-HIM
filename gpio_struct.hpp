#ifndef GPIO_STRUCT_HPP
#define GPIO_STRUCT_HPP

#include <cstdint>

typedef struct 
{
    uint32_t moder_0:2;
    uint32_t moder_1:2;
    uint32_t moder_2:2;
    uint32_t moder_3:2;
    uint32_t moder_4:2;
    uint32_t moder_5:2;
    uint32_t moder_6:2;
    uint32_t moder_7:2;
    uint32_t moder_8:2;
    uint32_t moder_9:2;
    uint32_t moder_10:2;
    uint32_t moder_11:2;
    uint32_t moder_12:2;
    uint32_t moder_13:2;
    uint32_t moder_14:2;
    uint32_t moder_15:2;
}gpio_moder;


typedef struct
{
    std::uint8_t   reg_1;
    std::uint8_t   reg_2;
    std::uint16_t  reg_3;
    std::uint32_t  reg_4;
    gpio_moder     moder;
}gpio_struct;

#endif