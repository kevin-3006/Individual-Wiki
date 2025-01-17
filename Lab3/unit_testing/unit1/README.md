# _Hello World Example Unit 1_

_This test code shows how to test Unit 1 of the Hello World Example_


## How to use example

### Configure the project

1. Copy the block of code that relates to outputting the message and esp information into a separate function labelled "unit1_test".
2. Replace the "hello world" message with a message that tests the boundaries of the code.
3. Comment and Uncomment the appropriate lines in the code to test its respective Test Case.

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Test Cases

### Test Case Breakdown

 * There are 3 Test Cases:
    * Test Case 1 (TC1): Sets the message to ""
    * Test Case 2 (TC2): Sets the message to "Hello World"
    * Test Case 3 (TC3): Sets the message to "Kevin Sankar - 816013669 !!!"

### Test Case 1 Example Output  

 * Prints TC1 to console

```
ets Jan  8 2013,rst cause:2, boot mode:(3,7)

load 0x40100000, len 7136, room 16
tail 0
chksum 0x9c
load 0x3ffe8408, len 24, room 8
tail 0
chksum 0x25
load 0x3ffe8420, len 3336, room 8
tail 0
chksum 0x30
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 09:29:23
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x13fa0 ( 81824) map
I (170) esp_image: segment 1: paddr=0x00023fb8 vaddr=0x40223fb0 size=0x05648 ( 22088) map
I (181) esp_image: segment 2: paddr=0x00029608 vaddr=0x3ffe8000 size=0x003dc (   988) load
I (182) esp_image: segment 3: paddr=0x000299ec vaddr=0x40100000 size=0x00080 (   128) load
I (195) esp_image: segment 4: paddr=0x00029a74 vaddr=0x40100080 size=0x044bc ( 17596) load
I (216) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
```

### Test Case 2 Example Output  

 * Prints TC2 to console

```
ets Jan  8 2013,rst cause:1, boot mode:(3,7)

load 0x40100000, len 7136, room 16
tail 0
chksum 0x9c
load 0x3ffe8408, len 24, room 8
tail 0
chksum 0x25
load 0x3ffe8420, len 3336, room 8
tail 0
chksum 0x30
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 09:29:23
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x13fac ( 81836) map
I (170) esp_image: segment 1: paddr=0x00023fc4 vaddr=0x40223fbc size=0x05654 ( 22100) map
I (181) esp_image: segment 2: paddr=0x00029620 vaddr=0x3ffe8000 size=0x003dc (   988) load
I (182) esp_image: segment 3: paddr=0x00029a04 vaddr=0x40100000 size=0x00080 (   128) load
I (195) esp_image: segment 4: paddr=0x00029a8c vaddr=0x40100080 size=0x044bc ( 17596) load
I (216) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
```

### Test Case 3 Example Output  

 * Prints TC3 to console

```
ets Jan  8 2013,rst cause:2, boot mode:(3,7)

load 0x40100000, len 7136, room 16
tail 0
chksum 0x9c
load 0x3ffe8408, len 24, room 8
tail 0
chksum 0x25
load 0x3ffe8420, len 3336, room 8
tail 0
chksum 0x30
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 09:29:23
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x13fa8 ( 8                                                                                       1832) map
I (170) esp_image: segment 1: paddr=0x00023fc0 vaddr=0x40223fb8 size=0x05668 ( 2                                                                                       2120) map
I (181) esp_image: segment 2: paddr=0x00029630 vaddr=0x3ffe8000 size=0x003dc (                                                                                          988) load
I (182) esp_image: segment 3: paddr=0x00029a14 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (195) esp_image: segment 4: paddr=0x00029a9c vaddr=0x40100080 size=0x044bc ( 1                                                                                       7596) load
I (216) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669 !!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
```