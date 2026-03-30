#include "board.h"

using namespace KFL;

// Messages to send for the USART test application

int main(int argc, char* argv[])
{
    board_init();
    Board& hw = get_board();

    while (1)
    {
        // Main loop for USART test application
    }

    return 0;
}