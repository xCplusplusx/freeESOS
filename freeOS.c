#include <freeOS.h>
#include <stdint.h> //For uint8_t ... datatyp
#include <driver.h>


void boot(){

    init_OS();

}


void Scheduler(){

    init_OS();

}


void init_OS(){

    check_registers();
    //read_setup();

}


