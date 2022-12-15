# 7-Segment-Clock

## Abstract
This project was inspired by my 3DE3 digital electronics course as well as the digital clocks we have in classrooms at McMaster University. The bottom layer shows the control system, namely ESP32 wroom module and CD4056BM96 BCD to 7 segment driver (decoder).

![7seg boards](https://user-images.githubusercontent.com/78376139/207985339-6dba03bb-c26b-4836-a15a-96e45c67e9c9.png)
![7segtop](https://user-images.githubusercontent.com/78376139/207985349-215cbd8a-2cc8-4b1e-9181-63be78ce538a.png)
![7segbottom](https://user-images.githubusercontent.com/78376139/207985354-fe20d606-debe-4ffd-baa6-408211aae561.png)


## Working principle 
Overall, the project is fairly simple, the aim is to have the ESP32 module connect to the internet or to a device via Bluetooth and request the current time and display the time on the 7 segment LEDs in a 24hr clock format.

For example, if the time is 12:34pm, the ESP32 is to send the value '1' to the first 7 segment display via the BCD driver. The same thing is done for the other three digits, '2', '3', and '4'

The ESP32 sends the number to display to the driver via BCD (binary coded decimal). The BCD driver has 4 BCD inputs (2<sup>0</sup>, 2<sup>1</sup>, 2<sup>2</sup>, 2<sup>3</sup>).

BCD is a method of representing numbers or digits by a set of bits. In our case, 4 bits hence the 4 BCD inputs on our driver. 
Example, the number (decimal) 0 corresponds to '0000' in BCD. In a similar way, the number (decimal) 5 corresponds to '0101' in BCD and number 9 corresponds to '0111' in BCD.

The order of these bits is important. Example, the binary number 9 represented as '0111' inputted as '1110' would not work as that represents another number. From the data sheet we see how to get the desired binary value from their BCD value and how to input the BCD into the driver IC. 

### Example: we want our 7-segment display to show the number 3 which corresponds to '0011' in BCD.
From the data sheet truth table, and pin or terminal assignment, we see that to get a display of 3, we need to input a BCD value of '0011' meaning we would have to set

pin 2<sup>0</sup> --> HIGH

pin 2<sup>1</sup> --> HIGH

pin 2<sup>2</sup> --> LOW

pin 2<sup>3</sup> --> LOW


Doing this, the decoder will realize a BCD inputs of '0011' has been inputted and outout the binary equivalent 3. It does this by controlling each individual led in the 7 segment display (which is an array of 7 LEDs) in such a way that a '3' is formed by lighting up specific LEDs to form the number 3.



