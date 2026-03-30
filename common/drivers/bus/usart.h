/**
* @file usart.h
* @author Bex Saw
* @brief USART generic driver header interface 
* @version 0.1
*/

#pragma once

namespace KFL
{
/**
* @class Usart
* @brief Usart driver instance.
*/
class Usart
{
public:
    /**
    * @brief writes data to the usart.
    */
    virtual bool write() = 0;

    /**
    * @brief reads data from the usart.
    */
    virtual bool read() = 0;

    ~Usart() = default;
};
}  // namespace KFL