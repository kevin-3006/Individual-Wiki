# _Hello World Example Unit 2_

_This test code shows how to test Unit 2 of the Hello World Example_


## How to use example

### Configure the project

1. Copy the block of code that relates to restarting the ESP into a separate function labelled "unit2_test".
2. Adjust the for loop to utilize a variable, n, to control how many times it loops.
3. Comment and Uncomment the appropriate lines in the code to test its respective Test Case.

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Test Cases

### Test Case Breakdown

 * There are 4 Test Cases:
    * Test Case 1 (TC1): Set n = 100
    * Test Case 2 (TC2): Set n = 10
    * Test Case 3 (TC3): Set n = 0
    * Test Case 4 (TC4): Set n = -10

### Test Case 1 Example Output  

 * Prints TC1 to console

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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (183) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (196) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000
I (263) Unit 2 TC1: Restarting in 100 seconds...

I (1265) Unit 2 TC1: Restarting in 99 seconds...

I (2265) Unit 2 TC1: Restarting in 98 seconds...

I (3265) Unit 2 TC1: Restarting in 97 seconds...

I (4265) Unit 2 TC1: Restarting in 96 seconds...

I (5265) Unit 2 TC1: Restarting in 95 seconds...

I (6265) Unit 2 TC1: Restarting in 94 seconds...

I (7265) Unit 2 TC1: Restarting in 93 seconds...

I (8265) Unit 2 TC1: Restarting in 92 seconds...

I (9265) Unit 2 TC1: Restarting in 91 seconds...

I (10266) Unit 2 TC1: Restarting in 90 seconds...

I (11266) Unit 2 TC1: Restarting in 89 seconds...

I (12266) Unit 2 TC1: Restarting in 88 seconds...

I (13266) Unit 2 TC1: Restarting in 87 seconds...

I (14266) Unit 2 TC1: Restarting in 86 seconds...

I (15266) Unit 2 TC1: Restarting in 85 seconds...

I (16266) Unit 2 TC1: Restarting in 84 seconds...

I (17266) Unit 2 TC1: Restarting in 83 seconds...

I (18266) Unit 2 TC1: Restarting in 82 seconds...

I (19266) Unit 2 TC1: Restarting in 81 seconds...

I (20267) Unit 2 TC1: Restarting in 80 seconds...

I (21267) Unit 2 TC1: Restarting in 79 seconds...

I (22267) Unit 2 TC1: Restarting in 78 seconds...

I (23267) Unit 2 TC1: Restarting in 77 seconds...

I (24267) Unit 2 TC1: Restarting in 76 seconds...

I (25267) Unit 2 TC1: Restarting in 75 seconds...

I (26267) Unit 2 TC1: Restarting in 74 seconds...

I (27267) Unit 2 TC1: Restarting in 73 seconds...

I (28267) Unit 2 TC1: Restarting in 72 seconds...

I (29267) Unit 2 TC1: Restarting in 71 seconds...

I (30268) Unit 2 TC1: Restarting in 70 seconds...

I (31268) Unit 2 TC1: Restarting in 69 seconds...

I (32268) Unit 2 TC1: Restarting in 68 seconds...

I (33268) Unit 2 TC1: Restarting in 67 seconds...

I (34268) Unit 2 TC1: Restarting in 66 seconds...

I (35268) Unit 2 TC1: Restarting in 65 seconds...

I (36268) Unit 2 TC1: Restarting in 64 seconds...

I (37268) Unit 2 TC1: Restarting in 63 seconds...

I (38268) Unit 2 TC1: Restarting in 62 seconds...

I (39268) Unit 2 TC1: Restarting in 61 seconds...

I (40269) Unit 2 TC1: Restarting in 60 seconds...

I (41269) Unit 2 TC1: Restarting in 59 seconds...

I (42269) Unit 2 TC1: Restarting in 58 seconds...

I (43269) Unit 2 TC1: Restarting in 57 seconds...

I (44269) Unit 2 TC1: Restarting in 56 seconds...

I (45269) Unit 2 TC1: Restarting in 55 seconds...

I (46269) Unit 2 TC1: Restarting in 54 seconds...

I (47269) Unit 2 TC1: Restarting in 53 seconds...

I (48269) Unit 2 TC1: Restarting in 52 seconds...

I (49269) Unit 2 TC1: Restarting in 51 seconds...

I (50270) Unit 2 TC1: Restarting in 50 seconds...

I (51270) Unit 2 TC1: Restarting in 49 seconds...

I (52270) Unit 2 TC1: Restarting in 48 seconds...

I (53270) Unit 2 TC1: Restarting in 47 seconds...

I (54270) Unit 2 TC1: Restarting in 46 seconds...

I (55270) Unit 2 TC1: Restarting in 45 seconds...

I (56270) Unit 2 TC1: Restarting in 44 seconds...

I (57270) Unit 2 TC1: Restarting in 43 seconds...

I (58270) Unit 2 TC1: Restarting in 42 seconds...

I (59270) Unit 2 TC1: Restarting in 41 seconds...

I (60271) Unit 2 TC1: Restarting in 40 seconds...

I (61271) Unit 2 TC1: Restarting in 39 seconds...

I (62271) Unit 2 TC1: Restarting in 38 seconds...

I (63271) Unit 2 TC1: Restarting in 37 seconds...

I (64271) Unit 2 TC1: Restarting in 36 seconds...

I (65271) Unit 2 TC1: Restarting in 35 seconds...

I (66271) Unit 2 TC1: Restarting in 34 seconds...

I (67271) Unit 2 TC1: Restarting in 33 seconds...

I (68271) Unit 2 TC1: Restarting in 32 seconds...

I (69271) Unit 2 TC1: Restarting in 31 seconds...

I (70272) Unit 2 TC1: Restarting in 30 seconds...

I (71272) Unit 2 TC1: Restarting in 29 seconds...

I (72272) Unit 2 TC1: Restarting in 28 seconds...

I (73272) Unit 2 TC1: Restarting in 27 seconds...

I (74272) Unit 2 TC1: Restarting in 26 seconds...

I (75272) Unit 2 TC1: Restarting in 25 seconds...

I (76272) Unit 2 TC1: Restarting in 24 seconds...

I (77272) Unit 2 TC1: Restarting in 23 seconds...

I (78272) Unit 2 TC1: Restarting in 22 seconds...

I (79272) Unit 2 TC1: Restarting in 21 seconds...

I (80273) Unit 2 TC1: Restarting in 20 seconds...

I (81273) Unit 2 TC1: Restarting in 19 seconds...

I (82273) Unit 2 TC1: Restarting in 18 seconds...

I (83273) Unit 2 TC1: Restarting in 17 seconds...

I (84273) Unit 2 TC1: Restarting in 16 seconds...

I (85273) Unit 2 TC1: Restarting in 15 seconds...

I (86273) Unit 2 TC1: Restarting in 14 seconds...

I (87273) Unit 2 TC1: Restarting in 13 seconds...

I (88273) Unit 2 TC1: Restarting in 12 seconds...

I (89273) Unit 2 TC1: Restarting in 11 seconds...

I (90274) Unit 2 TC1: Restarting in 10 seconds...

I (91274) Unit 2 TC1: Restarting in 9 seconds...

I (92274) Unit 2 TC1: Restarting in 8 seconds...

I (93274) Unit 2 TC1: Restarting in 7 seconds...

I (94274) Unit 2 TC1: Restarting in 6 seconds...

I (95274) Unit 2 TC1: Restarting in 5 seconds...

I (96274) Unit 2 TC1: Restarting in 4 seconds...

I (97274) Unit 2 TC1: Restarting in 3 seconds...

I (98274) Unit 2 TC1: Restarting in 2 seconds...

I (99274) Unit 2 TC1: Restarting in 1 seconds...

I (100275) Unit 2 TC1: Restarting in 0 seconds...

I (101275) Unit 2 TC1: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC1: Restarting in 100 seconds...

I (1494) Unit 2 TC1: Restarting in 99 seconds...

I (2494) Unit 2 TC1: Restarting in 98 seconds...

I (3494) Unit 2 TC1: Restarting in 97 seconds...
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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (10                                                                                       9504) map
I (183) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 2                                                                                       8352) map
I (196) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000
I (263) Unit 2 TC2: Restarting in 10 seconds...

I (1265) Unit 2 TC2: Restarting in 9 seconds...

I (2265) Unit 2 TC2: Restarting in 8 seconds...

I (3265) Unit 2 TC2: Restarting in 7 seconds...

I (4265) Unit 2 TC2: Restarting in 6 seconds...

I (5265) Unit 2 TC2: Restarting in 5 seconds...

I (6265) Unit 2 TC2: Restarting in 4 seconds...

I (7265) Unit 2 TC2: Restarting in 3 seconds...

I (8265) Unit 2 TC2: Restarting in 2 seconds...

I (9265) Unit 2 TC2: Restarting in 1 seconds...

I (10266) Unit 2 TC2: Restarting in 0 seconds...

I (11266) Unit 2 TC2: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC2: Restarting in 10 seconds...

I (1494) Unit 2 TC2: Restarting in 9 seconds...
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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (10                                                                                       9504) map
I (183) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 2                                                                                       8352) map
I (196) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (197) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (208) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (230) boot: Loaded app from partition at offset 0x10000
I (263) Unit 2 TC3: Restarting in 0 seconds...

I (1265) Unit 2 TC3: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (10                                                                                       9504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 2                                                                                       8352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC3: Restarting in 0 seconds...

I (1494) Unit 2 TC3: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (10                                                                                       9504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 2                                                                                       8352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC3: Restarting in 0 seconds...

I (1494) Unit 2 TC3: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (10                                                                                       9504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 2                                                                                       8352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (                                                                                         1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (                                                                                          128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 2                                                                                       0200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC3: Restarting in 0 seconds...
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
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (183) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (196) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (197) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (208) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (230) boot: Loaded app from partition at offset 0x10000
I (263) Unit 2 TC4: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC4: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC4: Restarting now.


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
I (238) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1abc0 (109504) map
I (339) esp_image: segment 1: paddr=0x0002abd8 vaddr=0x4022abd0 size=0x06ec0 ( 28352) map
I (358) esp_image: segment 2: paddr=0x00031aa0 vaddr=0x3ffe8000 size=0x00554 (  1364) load
I (361) esp_image: segment 3: paddr=0x00031ffc vaddr=0x40100000 size=0x00080 (   128) load
I (389) esp_image: segment 4: paddr=0x00032084 vaddr=0x40100080 size=0x04ee8 ( 20200) load
I (428) boot: Loaded app from partition at offset 0x10000
I (492) Unit 2 TC4: Restarting now.


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
I (80) boot: ESP-IDF v3.4-dev-363-gdda5062
```