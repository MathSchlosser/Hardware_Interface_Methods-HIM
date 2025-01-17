#include <iostream>

#include "gpio.hpp"


int main()
{
    GPIO_REG.reg_1 = 0x1;
    GPIO_REG.reg_2 = 0xc;
    GPIO_REG.reg_3 = 0xa;
    GPIO_REG.reg_4 = 0xff;

    printf("Valores reg_1: 0x%x, reg_2: 0x%x, reg_3: 0x%x, reg_4: 0x%x.\n", GPIO_REG.reg_1, GPIO_REG.reg_2, GPIO_REG.reg_3, GPIO_REG.reg_4);
    printf("Valores GPIO_TEMP_ADDRESS: 0x%x%x.\n", GPIO_TEMP_ADDRESS, GPIO_TEMP_ADDRESS >> 32);
    

    /*
    HIM_gpio gpio(GPIO_11, GPIO_MODE_OUTPUT);
    
    gpio.get_gpio_info();
    gpio.write_gpio(GPIO_STATE_ON);
    gpio.get_gpio_info();
    gpio.write_gpio(GPIO_STATE_OFF);
    gpio.get_gpio_info();
    gpio.toggle_gpio();
    gpio.get_gpio_info();
    gpio.toggle_gpio();
    gpio.get_gpio_info();
    */
}