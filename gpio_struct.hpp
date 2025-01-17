#ifndef GPIO_STRUCT_HPP
#define GPIO_STRUCT_HPP

#include <cstdint>

typedef struct 
{
    std::uint32_t moder_0:2;
    std::uint32_t moder_1:2;
    std::uint32_t moder_2:2;
    std::uint32_t moder_3:2;
    std::uint32_t moder_4:2;
    std::uint32_t moder_5:2;
    std::uint32_t moder_6:2;
    std::uint32_t moder_7:2;
    std::uint32_t moder_8:2;
    std::uint32_t moder_9:2;
    std::uint32_t moder_10:2;
    std::uint32_t moder_11:2;
    std::uint32_t moder_12:2;
    std::uint32_t moder_13:2;
    std::uint32_t moder_14:2;
    std::uint32_t moder_15:2;
}gpio_moder;

typedef struct 
{
    std::uint32_t ot_0:1;
    std::uint32_t ot_1:1;
    std::uint32_t ot_2:1;
    std::uint32_t ot_3:1;
    std::uint32_t ot_4:1;
    std::uint32_t ot_5:1;
    std::uint32_t ot_6:1;
    std::uint32_t ot_7:1;
    std::uint32_t ot_8:1;
    std::uint32_t ot_9:1;
    std::uint32_t ot_10:1;
    std::uint32_t ot_11:1;
    std::uint32_t ot_12:1;
    std::uint32_t ot_13:1;
    std::uint32_t ot_14:1;
    std::uint32_t ot_15:1;
    const std::uint32_t reserved:16;
    
}gpio_otyper;

typedef struct 
{
    std::uint32_t ospeedr_0:2;
    std::uint32_t ospeedr_1:2;
    std::uint32_t ospeedr_2:2;
    std::uint32_t ospeedr_3:2;
    std::uint32_t ospeedr_4:2;
    std::uint32_t ospeedr_5:2;
    std::uint32_t ospeedr_6:2;
    std::uint32_t ospeedr_7:2;
    std::uint32_t ospeedr_8:2;
    std::uint32_t ospeedr_9:2;
    std::uint32_t ospeedr_10:2;
    std::uint32_t ospeedr_11:2;
    std::uint32_t ospeedr_12:2;
    std::uint32_t ospeedr_13:2;
    std::uint32_t ospeedr_14:2;
    std::uint32_t ospeedr_15:2;
    
}gpio_ospeedr;

typedef struct 
{
    std::uint32_t pupdr_0:2;
    std::uint32_t pupdr_1:2;
    std::uint32_t pupdr_2:2;
    std::uint32_t pupdr_3:2;
    std::uint32_t pupdr_4:2;
    std::uint32_t pupdr_5:2;
    std::uint32_t pupdr_6:2;
    std::uint32_t pupdr_7:2;
    std::uint32_t pupdr_8:2;
    std::uint32_t pupdr_9:2;
    std::uint32_t pupdr_10:2;
    std::uint32_t pupdr_11:2;
    std::uint32_t pupdr_12:2;
    std::uint32_t pupdr_13:2;
    std::uint32_t pupdr_14:2;
    std::uint32_t pupdr_15:2;
    
}gpio_pupdr;

typedef struct 
{
    const std::uint32_t idr_0:1;
    const std::uint32_t idr_1:1;
    const std::uint32_t idr_2:1;
    const std::uint32_t idr_3:1;
    const std::uint32_t idr_4:1;
    const std::uint32_t idr_5:1;
    const std::uint32_t idr_6:1;
    const std::uint32_t idr_7:1;
    const std::uint32_t idr_8:1;
    const std::uint32_t idr_9:1;
    const std::uint32_t idr_10:1;
    const std::uint32_t idr_11:1;
    const std::uint32_t idr_12:1;
    const std::uint32_t idr_13:1;
    const std::uint32_t idr_14:1;
    const std::uint32_t idr_15:1;
    const std::uint32_t reserved:16;
    
}gpio_idr;

typedef struct 
{
    std::uint32_t odr_0:1;
    std::uint32_t odr_1:1;
    std::uint32_t odr_2:1;
    std::uint32_t odr_3:1;
    std::uint32_t odr_4:1;
    std::uint32_t odr_5:1;
    std::uint32_t odr_6:1;
    std::uint32_t odr_7:1;
    std::uint32_t odr_8:1;
    std::uint32_t odr_9:1;
    std::uint32_t odr_10:1;
    std::uint32_t odr_11:1;
    std::uint32_t odr_12:1;
    std::uint32_t odr_13:1;
    std::uint32_t odr_14:1;
    std::uint32_t odr_15:1;
    const std::uint32_t reserved:16;
    
}gpio_odr;

typedef struct
{
    std::uint8_t   reg_1;
    std::uint8_t   reg_2;
    std::uint16_t  reg_3;
    std::uint32_t  reg_4;
    gpio_moder     moder;
}gpio_struct;

#endif