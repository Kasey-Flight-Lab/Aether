#pragma once
#include <cstdint>

namespace KFL::Utils
{

/**
 * @brief Delays execution for a specified number of milliseconds (uses SysTick timebase).
 * @param ms The number of milliseconds to delay.
 */
void delay_ms(uint32_t ms);

/**
 * @brief Returns the current millisecond tick count (since boot).
 */
uint32_t get_ms_ticks();

}  // namespace KFL::Utils