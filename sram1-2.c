#include <stdio.h> 
#include <stdint.h> 
//STM32F407G
//program to print the size of SRAM1 in bytes & to print the starting ADDRESS of SRAM2
//start and end address of SRAM1
#define SRAM1_START 0x20000000
#define SRAM1_END   0x2001BFFF


int main() { 
    /*calculate the size in bytes, + 1 to include all the addresses even 0x2000_0000.
     without +1 we will only get the difference between those addresses not all the addresses
     included in the memory location of that perpipheral
    */
    const  uint32_t SIZE_OF_SRAM1 = ((SRAM1_END - SRAM1_START) + 1);
    //get the SRAM2 peripheral starting address. 
    const uint32_t START_ADDRESS_OF_SRAM2 = SRAM1_START + SIZE_OF_SRAM1;
    //print the size in decimal(KILOBYTES) & the starting address of SRAM2
    printf("Size of SRAM1: %d (KB)\n", SIZE_OF_SRAM1/1024);
    printf("Starting address of SRAM2: 0x%x\n",START_ADDRESS_OF_SRAM2);
    return 0; 

} 
