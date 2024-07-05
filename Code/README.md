# Progress

Hello,

I have made quite some progress with code and wiring of this project.

I have programmed the motors shown here:

https://cdn.discordapp.com/attachments/1082098360107941960/1258902945031000114/IMG_5098.mov?ex=6689bc3b&amp;is=66886abb&amp;hm=028c33cc75ee87a1c863b9c9f96ea8343e4b6a6ff78cec31e5ea587998e24182&amp;

I have tested the magnets shown here:

https://github.com/morotonai/replac3d/assets/156618723/944a391e-ea40-470c-b5c2-92e37062ae4d

The wiring is all soldered to a perfboard. A picture is attached below.

![image](https://github.com/morotonai/replac3d/assets/156618723/97269278-1eba-4a79-b1ff-5c51e2238bb9)

Please note that I have not thoroughly tested the magnets on the actual assembly, as I am still working the project.

I chose to use an Arduino UNO for its increased digital output performance. I found it difficult to get the same consistent performance with my Raspberry Pi 2.

I also chose to use the TMC2209 over the TMC5160 (which I tested) because of its programming simplicity - no need for SPI or serial, it is easy to pulse. This means it may be easier to integrate with nanpy later.

I plan to change the 80T extension pulleys to 20T due to torque issues and sufficient speed.

Thank you!
