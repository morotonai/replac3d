# replac3d

The replac3d project is a robot that replaces the build plate of a Bambu Lab P1 and X1 series 3D printer.

The inspiration for this project came from my robotics competition season. I had to print many parts quickly for rapid prototyping, but couldn't remove a print after it finished due to my commitments (some of which are several hours long), wasting printing time. 

I did quite some research and noticed the following faults in existing solutions.

- I noticed most automated printing was done using the toolhead to eject the part off the bed. However, this does not work for short prints, can damage the part and toolhead, and requires catching it out of the air.
- Thomas Sanladerer's conveyor belt of build plates only works with a printer that can pass build plates through it, which does not work for the P1S (my printer) or X1C, and also involves free-fall.
- Many others I saw scraped the print off of the build plate, but this could possibly damage prints and the build plate, large prints could tip over, and small things like brims could be missed.

I was also inspired by the Prusa AFS system, but it is way too large, and grasps the build plate at the edge, which could cause prints to fall off due to the build plate bending, especially large prints that weigh it down.

Because of this, I decided to use 4 electromagnets to magnetically attract the build plate, overcoming the strength of the bed magnet.

This project is still in progress, and will be periodically updated.
