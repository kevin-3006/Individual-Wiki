# _GPIO Example_

_This test code shows how to configure gpio and how to use gpio interrupt._

## GPIO functions

 * GP2: output
 * GP0:  input, pulled up, interrupt from falling edge


## How to use example

### Hardware Required

 * Connect GP2 with GP0

### Configure the project

1. Only a single input and a single output are specified
2. A single handler is installed and used for the input on the falling edge
3. A sempahore is passed from the ISR instead of a message

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Example Output  

 * Generate pulses on GP2, that triggers interrupt on GP0.

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
chksum 0x3f
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 19:02:17
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x14710 ( 83728) map
I (171) esp_image: segment 1: paddr=0x00024728 vaddr=0x40224720 size=0x05854 ( 22612) map
I (182) esp_image: segment 2: paddr=0x00029f84 vaddr=0x3ffe8000 size=0x003dc (   988) load
I (183) esp_image: segment 3: paddr=0x0002a368 vaddr=0x40100000 size=0x00080 (   128) load
I (196) esp_image: segment 4: paddr=0x0002a3f0 vaddr=0x40100080 size=0x0451c ( 17692) load
I (217) boot: Loaded app from partition at offset 0x10000
I (248) gpio: GPIO[2]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 0| Intr:0
I (256) gpio: GPIO[0]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:2
I (267) main: cnt: 0

I (1262) main: cnt: 1

I (2262) main: cnt: 2

I (2265) main: GPIO[0] intr, val: 0

I (3262) main: cnt: 3

I (4262) main: cnt: 4

I (4265) main: GPIO[0] intr, val: 0

I (5262) main: cnt: 5

I (6262) main: cnt: 6

I (6265) main: GPIO[0] intr, val: 0

I (7262) main: cnt: 7

I (8262) main: cnt: 8

I (8265) main: GPIO[0] intr, val: 0

I (9262) main: cnt: 9

I (10263) main: cnt: 10

I (10266) main: GPIO[0] intr, val: 0
```
