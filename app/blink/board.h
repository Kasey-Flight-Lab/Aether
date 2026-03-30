/**
* @file board.h
* @author KFL
* @brief BSP file for the H7 BLINK SPECIFC
* @version 0.1
*/
#pragma once

#include "gpio.h"

namespace KFL
{

struct Board
{
    Gpio& led1;
#ifdef STM32H723xx
    Gpio& led2;
    Gpio& led3;
#endif
};

bool board_init(void);
Board& get_board(void);

}  // namespace KFL