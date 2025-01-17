#include <iostream>

#include "gpio.hpp"


HIM_gpio::HIM_gpio(gpio_num num, gpio_mode mode)
{
    set_gpio_num(num);
    set_gpio_mode(mode);
}
    
void HIM_gpio::get_gpio_info()
{
    std::cout << "Gpio num " << static_cast<int> (this->get_gpio_num()) << std::endl;
    std::cout << "Gpio mode " << static_cast<int> (this->mode) << std::endl;
    std::cout << "Gpio state " << static_cast<int> (this->read_gpio()) << std::endl << std::endl;
}


bool HIM_gpio::set_gpio_mode (gpio_mode mode)
{
 if (mode < GPIO_MODE_MAX)
    {
        this->mode = mode;
        return true;
    }
    else
    {
        return false;
    }
}

bool HIM_gpio::write_gpio(gpio_state state)
{
    gpio_mode mode = this->get_gpio_mode();
    if (mode == GPIO_MODE_OUTPUT)
    {
        if (state < GPIO_STATE_MAX)
        {
            this->set_gpio_state(static_cast<bool> (state));
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    
}

bool HIM_gpio::read_gpio()
{
    return this->get_gpio_state();
}

bool HIM_gpio::toggle_gpio()
{
    gpio_mode mode = this->get_gpio_mode();
    if ( mode == GPIO_MODE_OUTPUT)
    {
        bool state = this->get_gpio_state();
        if (state == true)
        {
            this->set_gpio_state(false);
            return true;
        }
        else
        {
            this->set_gpio_state(true);
            return false;
        }
    }
    else
    {
        return false;
    }
    
    
}

bool HIM_gpio::set_gpio_num(gpio_num num)
{
    if (num < GPIO_NUM_MAX)
    {
        this->num = num;
        return true;
    }
    else
    {
        return false;
    }
    
}

bool HIM_gpio::set_gpio_state(bool state)
{
    this->state = state;
    return true;
}

bool HIM_gpio::get_gpio_state()
{
    return this->state;
}

gpio_num HIM_gpio::get_gpio_num()
{
    return this->num;
}

gpio_mode HIM_gpio::get_gpio_mode()
{
    return this->mode;
}
