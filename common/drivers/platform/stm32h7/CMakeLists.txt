add_library(hal STATIC
    st_gpio.cc
    st_sysclk.cc
    st_usart.cc
    #st_i2c.cc
)

target_include_directories(hal PUBLIC
    .
    ${CMAKE_SOURCE_DIR}/common/core/utils
)

target_link_libraries(hal PUBLIC
    st_h7_support
    core 
)