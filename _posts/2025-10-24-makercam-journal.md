---
title: "Makercam workflow"
date: 2025-10-24
categories:
  - Blog
tags:
  - Post Formats
  - notice
---
Firstly open the Maker Cam app and select 3 axis project 
![Screenshot 2025-10-31 151448](/assets/images/Screenshot%202025-10-31%20151448.png)

when the project field is open, change the x, y, and z values of the PCB to match the size of it in real life. For this project the values are 127x101x1.7mm. 
 
![Screenshot 2025-10-31 151448](/assets/images/Screenshot%202025-10-31%20151448.png)

![Screenshot 2025-10-31 151459](/assets/images/Screenshot%202025-10-31%20151459.png)

<img src="/assets/images/Screenshot%202025-10-31%20151448.png" alt="Screenshot 2025-10-31 151448" width="500">

Then select file and then import PCB then selct your edge cuts and drill files into the editor. 
After inserting all of the files the PCB is not visible from the workspace. 


Scroll out from the workspace and drag the mouse around the object to select it. Then press the M key to move the obeject and set the anchor point to the left bottom corner of the PCB and change the location of the X and Y to 6mm by 6mm.




Once that is finished select the icon that is labeled 2D paths and from there select 2D Pocket to cut the paths out for the PCB. Make sure to keep everything visble execpt the drill holes and the pads when creating the pocket. Make sure to unselect the top line of the edge cut. Change the cutting depth to 0.05 mm and then add the 0.8mm corn tool and the 0.2mm engraving tool. after that selct calculate. 




Then press the 2D paths icon and select 2D drilling. Change the cutting depth to 1.7mm so the machine can cut through. Deselect all paths and the previous cuts and only make the 2 drill files visible and select them. Then in the add tools menu select the 0.8mm corn tool and press calculate. 




After that the last step is to go to the 2D paths menu and select 2D contour and hide all objects execept the edgecuts file and deselect the outer line. Then set the cutting depth to 1.7mm and add the 0.8mm corn tool, then scroll down to the tabs menu. From there select the outside tab position and then the add tab button further down. and select 3 edges of the object. Make sure that the paths do not cross. Once that is finished press calculate. 




After all of the paths are created select preview and make sure the paths are white and display properly in the preview. To see the tabs look closely at the edges. It should look like a thin darkend line. 




Once everything looks correct select from the top bar export and select all 3 paths. Then click export and name the file. The file should be saved as a nc file.




Then open the Carvera app on the computer connected the Carvera CNC machine and select the icon in the bottom left corner that looks like a document. Then in the menu that just popped up click upload and select to bring your file into the machine. Then once the file has been selected open click on the hamburger icon in the corner and slect the move tool then home the axis. After that select the run G-code icon which looks like a gear and play button. Then turn on the auto vaccum and turn on Auto Leveling and after that select run and wait for the PCB to be milled. 


