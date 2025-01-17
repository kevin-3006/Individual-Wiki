# _Hello World Example Verification Test_

_This test code shows how to verification test the Hello World Example._ 


## Functional Requirements

1. Replace the "hello world" message with a message that includes your name and ID#
    * My name is Kevin Sankar and my ID# is 816013669. Therefore, for this verification test value = "Kevin Sankar - 816013669 !!!".
2. Replace the number of seconds, n, to restart with the last two digits of your ID# modulo 15.
    * My ID# is 816013669 -> 69 modulo 15 = 9. Therefore, for this verification test n = 9.


## How to use example

### Configure the project

1. Replace the label "integrated_units_test" with the label "hello_world".

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Test Cases

### Test Case Breakdown

 * There is 1 Test Case:
    * Test Case 1 (TC1): Set value = "Kevin Sankar - 816013669 !!!" and n = 9
   

## Test Case 1 Example Output  

 * Prints to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b074 (11                                                                                       0708) map
I (183) esp_image: segment 1: paddr=0x0002b08c vaddr=0x4022b084 size=0x06f50 ( 2                                                                                       8496) map
I (196) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669 !!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (272) Verification: Restarting in 9 seconds...
I (1275) Verification: Restarting in 8 seconds...
I (2275) Verification: Restarting in 7 seconds...
I (3275) Verification: Restarting in 6 seconds...
I (4275) Verification: Restarting in 5 seconds...
I (5275) Verification: Restarting in 4 seconds...
I (6275) Verification: Restarting in 3 seconds...
I (7275) Verification: Restarting in 2 seconds...
I (8275) Verification: Restarting in 1 seconds...
I (9275) Verification: Restarting in 0 seconds...
I (10276) Verification: Restarting now.


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
I (80) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (81) boot: compile time 09:29:23
I (83) boot: SPI Speed      : 40MHz
I (96) boot: SPI Mode       : DOUT
I (109) boot: SPI Flash Size : 1MB
I (121) boot: Partition Table:
I (133) boot: ## Label            Usage          Type ST Offset   Length
I (155) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (179) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (202) boot:  2 factory          factory app      00 00 00010000 000f0000
I (225) boot: End of partition table
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b074 (11                                                                                       0708) map
I (339) esp_image: segment 1: paddr=0x0002b08c vaddr=0x4022b084 size=0x06f50 ( 2                                                                                       8496) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669 !!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Verification: Restarting in 9 seconds...
I (1504) Verification: Restarting in 8 seconds...
I (2504) Verification: Restarting in 7 seconds...
I (3504) Verification: Restarting in 6 seconds...
I (4504) Verification: Restarting in 5 seconds...
I (5504) Verification: Restarting in 4 seconds...
I (6504) Verification: Restarting in 3 seconds...
I (7504) Verification: Restarting in 2 seconds...
I (8504) Verification: Restarting in 1 seconds...
I (9504) Verification: Restarting in 0 seconds...
I (10505) Verification: Restarting now.


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
I (80) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (81) boot: compile time 09:29:23
I (83) boot: SPI Speed      : 40MHz
I (96) boot: SPI Mode       : DOUT
I (109) boot: SPI Flash Size : 1MB
I (121) boot: Partition Table:
I (133) boot: ## Label            Usage          Type ST Offset   Length
I (155) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (179) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (202) boot:  2 factory          factory app      00 00 00010000 000f0000
I (225) boot: End of partition table
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b074 (11                                                                                       0708) map
I (339) esp_image: segment 1: paddr=0x0002b08c vaddr=0x4022b084 size=0x06f50 ( 2                                                                                       8496) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669 !!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Verification: Restarting in 9 seconds...
I (1504) Verification: Restarting in 8 seconds...
```
