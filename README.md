#  :doughnut: Arduino Library for SNES Controller
![PXL_20220826_222949330](https://user-images.githubusercontent.com/503975/186998987-c721a311-448b-4c56-b253-9196053ed956.jpg)

SNES controllers are a great, easy input for any arduino project. Dont worry about fussing with resistors and tiny finger destroying, breadboard buttons. This is a simple library to talk to a standard SNES controller.

Here is the basic pinout of a SNES controller:

```
  SNES Connector Layout (SNS-005)
  ---
  |0| - 5V - White Wire -> 5V PIN
  |0| - CLOCK - Yellow Wire -> PIN 4
  |0| - LATCH - Orange Wire -> PIN 3
  |0| - DATA - Red Wire -> PIN 2
  ---
  |0| - X
  |0| - X
  |0| - GND - Brown Wire -> GND PIN
  ---
```

[Bitluni](http://bitluni.net/gamepad) has a great write up about how the controller protocol works and a short video of how to splice the controller cable.

## :postbox: Contact & Support

Created by [Wyatt Ferguson](wyattxdev@duck.com)

For any comments or questions your can email me at [wyattxdev@duck.com](wyattxdev@duck.com)

[:coffee: Buy Me A Coffee](https://www.buymeacoffee.com/wyattferguson)
