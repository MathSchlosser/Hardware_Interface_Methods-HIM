#ifndef GPIO_HPP
#define GPIO_HPP

#include <cstdint>

#include "gpio_regs.hpp"

typedef enum
{
    GPIO_1 = 0,
    GPIO_2,
    GPIO_3,
    GPIO_4,
    GPIO_5,
    GPIO_6,
    GPIO_7,
    GPIO_8,
    GPIO_9,
    GPIO_10,
    GPIO_11,
    GPIO_12,
    GPIO_13,
    GPIO_14,
    GPIO_15,
    GPIO_NUM_MAX
}gpio_num;


typedef enum
{
    GPIO_MODE_OUTPUT = 0,
    GPIO_MODE_INPUT,
    GPIO_MODE_ALT,
    GPIO_MODE_MAX
}gpio_mode;


typedef enum
{
    GPIO_STATE_OFF = 0,
    GPIO_STATE_ON,
    GPIO_STATE_MAX
}gpio_state;



class HIM_gpio
{
    public:
        HIM_gpio(gpio_num num, gpio_mode mode = GPIO_MODE_INPUT);

        void get_gpio_info(); /* Temporary until using real hardware - just for monitoring*/
        bool set_gpio_mode(gpio_mode mode);
        bool write_gpio(gpio_state state);
        bool read_gpio();
        bool toggle_gpio();

    
    private:
        bool state; /* Temporary until using real hardware*/
        gpio_num num;
        gpio_mode mode; /* Temporary until using real hardware*/
        
        bool set_gpio_num(gpio_num num);
        bool set_gpio_state(bool state);
        bool get_gpio_state();
        gpio_num get_gpio_num();
        gpio_mode get_gpio_mode();
        
};

#endif