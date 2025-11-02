---
title: "Carvera CNC machine"
date: 2025-10-31T15:34:30-04:00
categories:
  - Blog
tags:
  - Post Formats
  - notice
---

Today my teacher wanted us to learn how to use the new CNC machines in the Fab Lab. We began by following Mr. Dubicks workflow to learn and create our first PCB with the new machines. This is the workflow reproduced by me.

Firstly open the Maker Cam app and select 3 axis project 
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151448.png' | relative_url }}" alt="Screenshot 2025-10-31 151448" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

When the project field is open, change the x, y, and z values of the PCB to match the size of it in real life. For this project the values are 127x101x1.7mm. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20151459.png' | relative_url }}" alt="Screenshot 2025-10-31 151459" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then select file and then import PCB then select your edge cuts and drill files into the editor. 
After inserting all of the files the PCB is not visible from the workspace. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20151519.png' | relative_url }}" alt="Screenshot 2025-10-31 151519" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151530.png' | relative_url }}" alt="Screenshot 2025-10-31 151530" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151549.png' | relative_url }}" alt="Screenshot 2025-10-31 151549" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151600.png' | relative_url }}" alt="Screenshot 2025-10-31 151600" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Scroll out from the workspace and drag the mouse around the object to select it. Then press the M key to move the obeject and set the anchor point to the left bottom corner of the PCB and change the location of the X and Y to 6mm by 6mm.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-10-31%20151626.png' | relative_url }}" alt="Screenshot 2025-10-31 151626" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Once that is finished select the icon that is labeled 2D paths and from there select 2D Pocket to cut the paths out for the PCB. Make sure to keep everything visble execpt the drill holes and the pads when creating the pocket. Make sure to unselect the top line of the edge cut. Change the cutting depth to 0.05 mm and then add the 0.8mm corn tool and the 0.2mm engraving tool. after that select calculate. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20151715.png' | relative_url }}" alt="Screenshot 2025-10-31 151715" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151738.png' | relative_url }}" alt="Screenshot 2025-10-31 151738" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151747.png' | relative_url }}" alt="Screenshot 2025-10-31 151747" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151754.png' | relative_url }}" alt="Screenshot 2025-10-31 151754" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151811.png' | relative_url }}" alt="Screenshot 2025-10-31 151811" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151919.png' | relative_url }}" alt="Screenshot 2025-10-31 151919" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then press the 2D paths icon and select 2D drilling. Change the cutting depth to 1.7mm so the machine can cut through. Deselect all paths and the previous cuts and only make the 2 drill files visible and select them. Then in the add tools menu select the 0.8mm corn tool and press calculate. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20152025.png' | relative_url }}" alt="Screenshot 2025-10-31 152025" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152052.png' | relative_url }}" alt="Screenshot 2025-10-31 152052" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152145.png' | relative_url }}" alt="Screenshot 2025-10-31 152145" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151811.png' | relative_url }}" alt="Screenshot 2025-10-31 151811" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

After that the last step is to go to the 2D paths menu and select 2D contour and hide all objects execept the edgecuts file and deselect the outer line. Then set the cutting depth to 1.7mm and add the 0.8mm corn tool, then scroll down to the tabs menu. From there select the outside tab position and then the add tab button further down. and select 3 edges of the object. Make sure that the paths do not cross. Once that is finished press calculate. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20152233.png' | relative_url }}" alt="Screenshot 2025-10-31 152233" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152241.png' | relative_url }}" alt="Screenshot 2025-10-31 152241" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152250.png' | relative_url }}" alt="Screenshot 2025-10-31 152250" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152306.png' | relative_url }}" alt="Screenshot 2025-10-31 152306" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20151811.png' | relative_url }}" alt="Screenshot 2025-10-31 151811" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152315.png' | relative_url }}" alt="Screenshot 2025-10-31 152315" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

After all of the paths are created select preview and make sure the paths are white and display properly in the preview. To see the tabs look closely at the edges. It should look like a thin darkend line. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20152333.png' | relative_url }}" alt="Screenshot 2025-10-31 152333" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152347.png' | relative_url }}" alt="Screenshot 2025-10-31 152347" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152353.png' | relative_url }}" alt="Screenshot 2025-10-31 152353" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152414.png' | relative_url }}" alt="Screenshot 2025-10-31 152414" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Once everything looks correct click the export (the icon to the right of preview) and select all 3 paths. Then click export and name the file. The file should be saved as a nc file.

<img src="{{ '/assets/images/Screenshot%202025-10-31%20152333.png' | relative_url }}" alt="Screenshot 2025-10-31 152333" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152426.png' | relative_url }}" alt="Screenshot 2025-10-31 152426" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20152433.png' | relative_url }}" alt="Screenshot 2025-10-31 152433" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then open the Carvera app on the computer connected the Carvera CNC machine and select the icon in the bottom left corner that looks like a document. Then in the menu that just popped up click upload and select to bring your file into the machine. Then once the file has been selected open click on the hamburger icon in the corner and select the move tool then home the axis. After that select the run G-code icon which looks like a gear and play button. Then turn on the auto vaccum and turn on Auto Leveling and after that select run and wait for the PCB to be milled. 

<img src="{{ '/assets/images/Screenshot%202025-10-31%20153318.png' | relative_url }}" alt="Screenshot 2025-10-31 153318" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20153328.png' | relative_url }}" alt="Screenshot 2025-10-31 153328" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
<img src="{{ '/assets/images/Screenshot%202025-10-31%20153353.png' | relative_url }}" alt="Screenshot 2025-10-31 153353" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
