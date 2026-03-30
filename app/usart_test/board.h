/**
* @file board.h
* @author KFL
* @brief BSP file for the H7 USART SPECIFC
* @version 0.1
*/

#pragma once

#include "gpio.h"
#include "usart.h"

namespace KFL
{

struct Board
{
    Gpio& tx;
    Gpio& rx;
    Usart& usart;
};

bool board_init(void);
Board& get_board(void);

}  // namespace KFL