#ifndef GPIO_REGS_HPP
#define GPIO_REGS_HPP

#include "gpio_struct.hpp"

/*---------------- BASE_REGISTERS ----------------------*/
constexpr std::uint32_t gpioa_base_address = 0x40020000U;
constexpr std::uint32_t gpiob_base_address = 0x40020400U;
constexpr std::uint32_t gpioc_base_address = 0x40020800U;
constexpr std::uint32_t gpiod_base_address = 0X40020C00U;
constexpr std::uint32_t gpioe_base_address = 0x40021000U;
constexpr std::uint32_t gpiof_base_address = 0x40021400U;
constexpr std::uint32_t gpiog_base_address = 0x40021800U;
constexpr std::uint32_t gpioh_base_address = 0x40021C00U;

/*------------------ MODER_OFFSET -----------------------*/
constexpr std::uint32_t gpio_moder_offset = 0x0U;

/*------------------ OTYPER_OFFSET ----------------------*/
constexpr std::uint32_t gpio_otyper_offset = 0x04U;

/*------------------ OSPEEDER_OFFSET --------------------*/
constexpr std::uint32_t gpio_ospeedr_offset = 0x08U;

/*------------------ PUPDR_OFFSET ---------------------*/
constexpr std::uint32_t gpio_pupdr_offset = 0x0CU;

/*------------------ IDR_OFFSET -----------------------*/
constexpr std::uint32_t gpio_idr_offset = 0x10U;

/*------------------ ODR_OFFSET -----------------------*/
constexpr std::uint32_t gpio_odr_offset = 0x14U;

/*------------------ BRR_OFFSET -----------------------*/
constexpr std::uint32_t gpio_brr_offset = 0x18U;

/*------------------ LKR_OFFSET -----------------------*/
constexpr std::uint32_t gpio_lkr_offset = 0x1CU;

/*------------------ AFRL_OFFSET -----------------------*/
constexpr std::uint32_t gpio_afrl_offset = 0x20U;

/*------------------ AFRH_OFFSET -----------------------*/
constexpr std::uint32_t gpio_afrh_offset = 0x24U;


inline std::uint64_t GPIO_TEMP_ADDRESS;

inline gpio_struct* const gpio_ptr_addr = reinterpret_cast<gpio_struct*>(&GPIO_TEMP_ADDRESS);  // Definição do ponteiro
inline gpio_struct& GPIO_REG = *gpio_ptr_addr; 

/* ---------------------------------------------------- GPIOA REGISTERS ------------------------------------------------- */
/* GPIO_REG_BASE */
inline gpio_struct* const gpioa_base_addr = reinterpret_cast<gpio_struct*>(gpioa_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOA_BASE_ADDR = *gpioa_base_addr; 

/* GPIO_MODER */
inline gpio_moder* const gpioa_moder_addr = reinterpret_cast<gpio_moder*>(gpioa_base_address + gpio_moder_offset);  // Definição do ponteiro
inline gpio_moder& GPIOA_MODER = *gpioa_moder_addr; 

/* GPIO_OTYPER */
inline gpio_otyper* const gpioa_otyper_addr = reinterpret_cast<gpio_otyper*>(gpioa_base_address + gpio_otyper_offset);  // Definição do ponteiro
inline gpio_otyper& GPIOA_OTYPER = *gpioa_otyper_addr; 

/* GPIO_OSPEEDR */
inline gpio_ospeedr* const gpioa_ospeedr_addr = reinterpret_cast<gpio_ospeedr*>(gpioa_base_address + gpio_ospeedr_offset);  // Definição do ponteiro
inline gpio_ospeedr& GPIOA_OSPEEDR = *gpioa_ospeedr_addr; 

/* GPIO_PUPDR */
inline gpio_pupdr* const gpioa_pupdr_addr = reinterpret_cast<gpio_pupdr*>(gpioa_base_address + gpio_pupdr_offset);  // Definição do ponteiro
inline gpio_pupdr& GPIOA_PUPDR = *gpioa_pupdr_addr; 

/* GPIO_IDR */
inline gpio_idr* const gpioa_idr_addr = reinterpret_cast<gpio_idr*>(gpioa_base_address + gpio_idr_offset);  // Definição do ponteiro
inline gpio_idr& GPIOA_IDR = *gpioa_idr_addr; 

/* GPIO_ODR */
inline gpio_odr* const gpioa_odr_addr = reinterpret_cast<gpio_odr*>(gpioa_base_address + gpio_odr_offset);  // Definição do ponteiro
inline gpio_odr& GPIOA_ODR = *gpioa_odr_addr; 


/* ---------------------------------------------------- GPIOB REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOC REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOD REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOE REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOF REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOG REGISTERS ------------------------------------------------- */
/* ---------------------------------------------------- GPIOH REGISTERS ------------------------------------------------- */

#endif