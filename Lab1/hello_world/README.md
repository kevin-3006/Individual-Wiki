# _Hello World Example_

_This test code shows how to print to the console every number of seconds._


## How to use example

### Configure the project

1. Replace the "hello world" message with a message that includes your name and ID#.
2. Replace the number of seconds to restart with the last two digits of your ID# modulo 15. 

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Example Output  

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b048 (110664) map
I (183) esp_image: segment 1: paddr=0x0002b060 vaddr=0x4022b058 size=0x06f3c ( 28476) map
I (196) esp_image: segment 2: paddr=0x00031fa4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00032500 vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x00032588 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669!!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
Restarting in 9 seconds...
Restarting in 8 seconds...
Restarting in 7 seconds...
Restarting in 6 seconds...
Restarting in 5 seconds...
Restarting in 4 seconds...
Restarting in 3 seconds...
Restarting in 2 seconds...
Restarting in 1 seconds...
Restarting in 0 seconds...
Restarting now.

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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b048 (110664) map
I (339) esp_image: segment 1: paddr=0x0002b060 vaddr=0x4022b058 size=0x06f3c ( 28476) map
I (359) esp_image: segment 2: paddr=0x00031fa4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032500 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x00032588 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669!!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
Restarting in 9 seconds...
Restarting in 8 seconds...
Restarting in 7 seconds...
Restarting in 6 seconds...
Restarting in 5 seconds...
Restarting in 4 seconds...
Restarting in 3 seconds...
Restarting in 2 seconds...
Restarting in 1 seconds...
Restarting in 0 seconds...
Restarting now.

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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b048 (110664) map
I (339) esp_image: segment 1: paddr=0x0002b060 vaddr=0x4022b058 size=0x06f3c ( 28476) map
I (359) esp_image: segment 2: paddr=0x00031fa4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032500 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x00032588 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000
Kevin Sankar - 816013669!!!
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
Restarting in 9 seconds...
Restarting in 8 seconds...
Restarting in 7 seconds...
Restarting in 6 seconds...
Restarting in 5 seconds...
```
