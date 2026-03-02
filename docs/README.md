| Part | Type | Notes |
|------|------|-------|
| STM32F745VET6 | MCU | Everything runs on it |
| STM32L432KBU6 | MCU | Everything runs on it |
| W25Q256 | SPI Flash | Erase/write sequencing, status polling |
| MS5607 | Barometer | I2C + compensation math from PROM |
| BMI088 | IMU | SPI, separate accel/gyro addresses |
| BNO055 | IMU | I2C, fusion mode, calibration |
| MMC5983MA | Magnetometer | SPI/I2C, SET/RESET, 18-bit output |
| H3LIS331 | High-G Accel | SPI/I2C, range + ODR config |
| MAX-M8Q-0 | GPS | UART/I2C, NMEA parsing, UBX protocol |
| USB3318C-CP-TR | USB PHY | ULPI register init, mode config |
| CMT-8504 | Buzzer | PWM + pattern logic |
| SX1280 | 2.4GHz Radio | SPI, full register config, packet engine |
| SX1262 | 900MHz Radio | SPI, full register config, PA config |
| TPS25940 | eFuse | I2C, current limit, fault status |
| TPS259824 | eFuse | I2C, current limit, fault status |
| VOD207T | Optoisolator | GPIO + pyro arm/fire/disarm logic |