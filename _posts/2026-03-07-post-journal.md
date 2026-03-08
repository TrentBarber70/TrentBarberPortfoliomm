---
title: "March 5th checkpoint 3-07-26"
categories:
  - journali
tags:
  - Cabinet
---

# Final Project check point 2

## Description 
My project for the 2025-2026 Advance topics in Engineering course is a half-size Pinaball machine. 
I was inspired to start this project after viewing a video by Thepinballroom on Youtube. I also was inspired by the 1997 NBA fastbreak pinball machine because I liked how interactive it was with the user. The reason that I will be using thepinballroom's project is because I think that the amount of detail that they go into is benificial to my project because the video series provides sources to the parts and techniques when it comes to making a DIY pinball machine. 
My project will be diferent from the source project because I plan to incorporate a multiball function into the pinball machine's gameplay that will also trigger a cutscene through an audio cue. I will incorporate the audio cue using the DF player mini to play an file that will tell the player that multiball has started. For the multiball function I plan to have the balls be loaded at the top of the playing field manually and then when the switch is triggered the audio will play and the balls will drop onto the playing field. 

## Original project 
<a href="https://thepinballroom.com/diy-pinball">Original project</a>
<img src="{{ '/assets/images/Pinballroomcabinet.png' | relative_url }}" alt="Pinballroomcabinet" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> 

## NBA Fastbreak
<img src="{{ '/assets/images/NBAFastbreak.jpg' | relative_url }}" alt="NBAFastbreak" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> 


## Specifications 
<a href="https://docs.google.com/document/d/1-ltgxIzuz0tkOvbU_GjGPMJ4mxg-FKCPhfN8WQ-nMWA/edit?tab=t.0">Specifications</a>

## What I've completed 

As of today I have created and assembled a functional pinball machine that has two working flippers that work under 12v and the pinball can be launched form an assembeld pinball launcher. The ball also can bounce off of two assebled slingshots. lastly there is a working score board.

## Bom
<a href="https://docs.google.com/spreadsheets/d/19EQvHHPxPg1upf5Wbr9uvgJ0j7gkCCIl4bn_uJnjy8Q/edit?gid=0#gid=0">BOM</a>

## Overall cost

$340.76

## Issues and Mistakes 

Some issues that I've been having is the process in making a solenoid. Though I did my reasearch I had made the mistake of not making enough turns around the spool with the 36 awg wire. Furthermore, the gauge of wire that I was using was very thin which meant that the wire would have less resistance and heat up very quickly when I would run the circuit. Then when I tested my first solenoid in October the issue that I had was that there was not enough current to create a strong pull and the air gap was too big in the solenoid. As of 12-15-2025 I have a working solenoid that has many turns and the pole is a nail that pulls when running 12v with a current of .8. Another mistake that has held progress back is the inability to test how many turns are on the spool without cutting the wire. When the wire is cut there is no way to extend the length or reactach the wire. I have gone though many versions of the solenoid which has wasted much material. I will research a way of finding how many turns the spool has before cutting the wire. One issue that I have ran into is that my nail solenoid is very weak and can not fight against the force of the spring and will not pull all the way down. 

Addtionaly, the biggest mistake that I have made was trying to recreate a solenoid when I could have bought one. Another mistake is that I made the front panel of the pinball cabinet too tall and the insert holes on the side panels were too deep for the 1/2in wood back panel. Furthermore I overestimated the complexity and time it  would take to create the circuit needed for the pinball flippers and overall machine and becasue of that overestimation I did not finish the circuit or the PCB on time for the second checkpoint. Another issue I ran into while making the pinball machine was that the spring that I was using for the launcher is weak and unreliable for the purpose of launching the ball. Lastly, cutting out the white wood with the table saw caused the play field to not be even on both sides. The reason that I used the table saw was because the larger laser cutter was out of commision with the newer version of the play field I will cut it out on the laser cutter along with the insert holes and engravings.

## My old files 

<p>
  <a href="{{ '/assets/STL/Back panel v6.stl' | relative_url }}" download>Cabinet STL files</a>
</p>

<p>
  <a href="{{ '/assets/STL/Plunger.zip' | relative_url }}" download>Plunger STL files</a>
</p>

<p>
  <a href="{{ '/assets/STL/Solenoid.zip' | relative_url }}" download>Solenoid spool STL files</a>
</p>

<p>
  <a href="{{ '/assets/Code/Counter.zip' | relative_url }}" download>67 Counter</a>
</p>

## My new files

<p>
  <a href="{{ '/assets/STL/All pinball files.zip' | relative_url }}" download>All pinball files</a>
</p>

## Video of working Pinball machine

<video controls width="640">
  <source src="{{ site.baseurl }}/assets/videos/workingpinball.mp4" type="video/mp4">
</video>


## Tools used

__Machines__ 
- Bambu A1 3D printer 
- Soldering Iron
- Shopbot CNC
- Carvera CNC 
- Power Supply 
- Epilog laser fusion M2

__Tools and handtools__ 
- Drill
- Philips head screwdriver 
- Flathead screwdriver
- Multimeter 

# Summary

What I've learned through this entire process is that in order to get projects done on time I need to stop trying to over complicate problems that I may have while working on a project. For eample, I wasted two months trying to recreate a solenoid when I could buy one. Another thing I learned is to not underestimate the amount of time that something will take. I spent weeks on the cabinet files, STL files, and laser cut files but I negelected the need to work on my circuit and the PCB. In Addition I found that like Mr. Dubick had mentioned earlier in the project that it would take me more time than what I innitaly thought. To close, I learned that I underestimate the tasks that I put upon myself when it comes to planning out my projects.

Completing the project has been a fun process because as I've been working on the project I've learned more about how to use the machines in the fab lab. Since I have started this project I have learned how to use the Shop bot and now I can say with confidence that I can get the rest of the project done with the tools in the lab. Furthermore, I have learned how to create models and files more efficiantly on fusion and I feel like I am able to tackle the next few models that I will need for the rest of this project. This project is a great endevor for me because I like how at every step of the project I have to learn something new in order to move foward. While that can be seen as a negative thing I think because this project has developed my skills in a short amount of time I think I am better prepared to finish this last checkpoint before April the 15th. 

My next steps are to finish and have a complete circuit that can control both of my flippers at 18v and power my arduino with 5v. I also want to install lights to add to the reactivity of the pinball machine and 3 more solenoids for pop bumpers to keep the game interesting. Change the spring to the launcher to have a more powerful kick and cut out the clear acrylic for the top glass. Then use reflective infrared optica sensors for the roll-over switches because the current microswitches interfere and leave the ball stuck when in play. Lastly, paint the cabinet black and use the laser cutter to engrave a design on the top glass. 