## Final clock

the final code for this device will be released soon


## Test code

The first test code is simple, it implements the theory previously explained. The objective is to display the values '1', '2', '3', '4' on each of the displays.
The second test makes the display count down from 8 to 0.

### Things to note
At the time this code was posted, the physical board had some errors present. The schematic in my hardware folder shows the updated schematic design with the bugs fixed. The test code here shows the DF and STROBE pins on different IO pins as compared to the schematic (becuase this test code is currently running on the board with faults). Please go through the schematic and configure the appropriate pins for DF and STROBE (both AB & CD) on your own Ardunio file.


DF and Strobe are control pins with more detail in the datasheet. For this project's use case we don't bother with them much and simply set them both HIGH for normal operation. Note 

The 'dp' represents the decimal points that come with each segment display. I am only using the decimal point on the second display.
