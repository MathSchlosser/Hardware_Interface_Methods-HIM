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
constexpr std::uint32_t gpio_ospeeder_offset = 0x08U;

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
/* GPIOA_REG_BASE */
inline gpio_struct* const gpioa_base_addr = reinterpret_cast<gpio_struct*>(gpioa_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOA_BASE_ADDR = *gpioa_base_addr; 

/* GPIOA_MODER */
inline gpio_moder* const gpioa_base_addr = reinterpret_cast<gpio_moder*>(gpioa_base_address + gpio_moder_offset);  // Definição do ponteiro
inline gpio_moder& GPIOA_MODER = *gpioa_base_addr; 

/* ---------------------------------------------------- GPIOB REGISTERS ------------------------------------------------- */
/* GPIOB_REG_BASE */
inline gpio_struct* const gpiob_base_addr = reinterpret_cast<gpio_struct*>(gpiob_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOB_BASE_ADDR = *gpiob_base_addr; 

/* GPIOC_REG_BASE */
inline gpio_struct* const gpioc_base_addr = reinterpret_cast<gpio_struct*>(gpioc_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOC_BASE_ADDR = *gpioc_base_addr; 

/* GPIOD_REG_BASE */
inline gpio_struct* const gpiod_base_addr = reinterpret_cast<gpio_struct*>(gpiod_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOD_BASE_ADDR = *gpiod_base_addr; 

/* GPIOE_REG_BASE */
inline gpio_struct* const gpioe_base_addr = reinterpret_cast<gpio_struct*>(gpioe_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOE_BASE_ADDR = *gpioe_base_addr; 

/* GPIOF_REG_BASE */
inline gpio_struct* const gpiof_base_addr = reinterpret_cast<gpio_struct*>(gpiof_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOF_BASE_ADDR = *gpiof_base_addr; 

/* GPIOG_REG_BASE */
inline gpio_struct* const gpiog_base_addr = reinterpret_cast<gpio_struct*>(gpiog_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOG_BASE_ADDR = *gpiog_base_addr; 

/* GPIOH_REG_BASE */
inline gpio_struct* const gpioh_base_addr = reinterpret_cast<gpio_struct*>(gpioh_base_address);  // Definição do ponteiro
inline gpio_struct& GPIOH_BASE_ADDR = *gpioh_base_addr; 

#endif