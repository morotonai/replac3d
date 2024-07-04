# Progress

Hello,

I have made quite some progress with code and wiring of this project.

I have tested the motors shown here:

https://github.com/morotonai/replac3d/assets/156618723/5ec3da9f-54fc-4e61-a814-98177740567d

I have tested the magnets shown here:

https://github.com/morotonai/replac3d/assets/156618723/944a391e-ea40-470c-b5c2-92e37062ae4d

Please note that I have not thoroughly tested either of these for use on the actual assembly, as I am still working on it.

I chose to use an Arduino UNO for its increased digital output performance. I found it difficult to get the same consistent performance with my Raspberry Pi 2.

I also chose to use the TMC2209 over the TMC5160 (which I tested) because of its programming simplicity - no need for SPI or serial, it is easy to pulse. This means it may be easier to integrate with nanpy later.

Thank you!
