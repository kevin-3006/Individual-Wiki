# _Hello World Example Integrated Units 1 and 2_

_This test code shows how to integration test Unit 1 and Unit 2 of the Hello World Example_


## How to use example

### Configure the project

1. Copy the blocks of code that relates to Unit 1 and Unit 2 into a separate function labelled "integrated_units_test".
2. Adjust the variables value and n to test possible combinations for the boundaries of the code.
3. Comment and Uncomment the appropriate lines in the code to test its respective Test Case.

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Test Cases

### Test Case Breakdown

 * There are 6 Test Cases:
    * Test Case 1 (TC1): Set value = "" and n = 10
    * Test Case 2 (TC2): Set value = "Hello World" and n = 10
    * Test Case 3 (TC3): Set value = "" and n = 0
    * Test Case 4 (TC4): Set value = "Hello World" and n = 0
    * Test Case 5 (TC5): Set value = "" and n = -10
    * Test Case 6 (TC6): Set value = "Hello World" and n = -10

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (11                                                                                       0696) map
I (183) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 2                                                                                       8480) map
I (196) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (272) Integrated Units 1 and 2: TC1: Restarting in 10 seconds...
I (1275) Integrated Units 1 and 2: TC1: Restarting in 9 seconds...
I (2275) Integrated Units 1 and 2: TC1: Restarting in 8 seconds...
I (3275) Integrated Units 1 and 2: TC1: Restarting in 7 seconds...
I (4275) Integrated Units 1 and 2: TC1: Restarting in 6 seconds...
I (5275) Integrated Units 1 and 2: TC1: Restarting in 5 seconds...
I (6275) Integrated Units 1 and 2: TC1: Restarting in 4 seconds...
I (7275) Integrated Units 1 and 2: TC1: Restarting in 3 seconds...
I (8275) Integrated Units 1 and 2: TC1: Restarting in 2 seconds...
I (9275) Integrated Units 1 and 2: TC1: Restarting in 1 seconds...
I (10276) Integrated Units 1 and 2: TC1: Restarting in 0 seconds...
I (11276) Integrated Units 1 and 2: TC1: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (11                                                                                       0696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 2                                                                                       8480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Integrated Units 1 and 2: TC1: Restarting in 10 seconds...
I (1504) Integrated Units 1 and 2: TC1: Restarting in 9 seconds...
I (2504) Integrated Units 1 and 2: TC1: Restarting in 8 seconds...
```

### Test Case 2 Example Output  

 * Prints TC2 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (11                                                                                       0712) map
I (183) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 2                                                                                       8492) map
I (196) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (272) Integrated Units 1 and 2: TC2: Restarting in 10 seconds...
I (1275) Integrated Units 1 and 2: TC2: Restarting in 9 seconds...
I (2275) Integrated Units 1 and 2: TC2: Restarting in 8 seconds...
I (3275) Integrated Units 1 and 2: TC2: Restarting in 7 seconds...
I (4275) Integrated Units 1 and 2: TC2: Restarting in 6 seconds...
I (5275) Integrated Units 1 and 2: TC2: Restarting in 5 seconds...
I (6275) Integrated Units 1 and 2: TC2: Restarting in 4 seconds...
I (7275) Integrated Units 1 and 2: TC2: Restarting in 3 seconds...
I (8275) Integrated Units 1 and 2: TC2: Restarting in 2 seconds...
I (9275) Integrated Units 1 and 2: TC2: Restarting in 1 seconds...
I (10276) Integrated Units 1 and 2: TC2: Restarting in 0 seconds...
I (11276) Integrated Units 1 and 2: TC2: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (11                                                                                       0712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 2                                                                                       8492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Integrated Units 1 and 2: TC2: Restarting in 10 seconds...
I (1504) Integrated Units 1 and 2: TC2: Restarting in 9 seconds...
I (2504) Integrated Units 1 and 2: TC2: Restarting in 8 seconds...
I (3504) Integrated Units 1 and 2: TC2: Restarting in 7 seconds...
```

### Test Case 3 Example Output  

 * Prints TC3 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (183) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (196) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (272) Integrated Units 1 and 2: TC3: Restarting in 0 seconds...
I (1275) Integrated Units 1 and 2: TC3: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC3: Restarting in 0 seconds...
I (1504) Integrated Units 1 and 2: TC3: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC3: Restarting in 0 seconds...
```

### Test Case 4 Example Output  

 * Prints TC4 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (11                                                                                       0712) map
I (183) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 2                                                                                       8492) map
I (196) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (272) Integrated Units 1 and 2: TC4: Restarting in 0 seconds...
I (1275) Integrated Units 1 and 2: TC4: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (11                                                                                       0712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 2                                                                                       8492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Integrated Units 1 and 2: TC4: Restarting in 0 seconds...
I (1504) Integrated Units 1 and 2: TC4: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (11                                                                                       0712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 2                                                                                       8492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external fl                                                                                       ash
I (504) Integrated Units 1 and 2: TC4: Restarting in 0 seconds...
```

### Test Case 5 Example Output  

 * Prints TC5 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (183) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (196) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (272) Integrated Units 1 and 2: TC5: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC5: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC5: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b068 (110696) map
I (339) esp_image: segment 1: paddr=0x0002b080 vaddr=0x4022b078 size=0x06f40 ( 28480) map
I (359) esp_image: segment 2: paddr=0x00031fc8 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032524 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325ac vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000

This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC5: Restarting now.
```

### Test Case 6 Example Output  

 * Prints TC6 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (110712) map
I (183) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 28492) map
I (196) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (272) Integrated Units 1 and 2: TC6: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (110712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 28492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC6: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (110712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 28492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC6: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1b078 (110712) map
I (339) esp_image: segment 1: paddr=0x0002b090 vaddr=0x4022b088 size=0x06f4c ( 28492) map
I (359) esp_image: segment 2: paddr=0x00031fe4 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (362) esp_image: segment 3: paddr=0x00032540 vaddr=0x40100000 size=0x00080 (   128) load
I (390) esp_image: segment 4: paddr=0x000325c8 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (429) boot: Loaded app from partition at offset 0x10000
Hello World
This is ESP8266 chip with 1 CPU cores, WiFi, silicon revision 1, 1MB external flash
I (504) Integrated Units 1 and 2: TC6: Restarting now.


 ets Jan  8 2013,rst cause:2, boot mode:(3,7)

load 0x40100000, len 7136, room 16
```