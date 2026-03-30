#include "board.h"
#include "st_gpio.h"
#include "st_usart.h"

namespace KFL
{

// Initalized all of the pins

// Initialized clock init

// Have all params pass it down to the contructor

bool board_init()
{
    // Initialized the RCC and USART specific stuff

    // Init all of the pins

    // Checksum if theirs issue

    // Return true or false

    return true;
}

Board& get_board()
{
    return board;
}

}  // namespace KFL
