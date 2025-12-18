# Journal: Topograpghy map 12-17-2025

## Workflow 

To start use the Terrain2stl genarator and plot a place on the virtual map and modify the settings to adjust the size of the box and the vertical scaling and water drop to make the features of the mountain more pronounced.  

<img src="{{ '/assets/images/Screenshot%202025-12-17%20141925.png' | relative_url }}" alt="Screenshot 2025-12-17 141925" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
Then generate the file and download the stl.

I then printed the file to see what it would look like before I used the cnc machine to mill it out of pine wood.

<img src="{{ '/assets/images/IMG_0683.jpg' | relative_url }}" alt="IMG_0683" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Open Aspire and begin by creating a new file and adjust the job size to 2.5 x 3.5 x 1 and set the z zero position to the top. Then set the X Datumn to the bottom left. Then click OK.

<img src="{{ '/assets/images/Screenshot%202025-12-17%20142356.png' | relative_url }}" alt="Screenshot 2025-12-17 142356" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then go to the Modeling tab and click on import 3d model to import the stl file. Then change the model size to 2.5 x 3.5 x 1 and set units to inches. make sure to unlock the xyz ratio before you type in those previous values. Then click apply and then center the model. Lastly, click posistion and Import. 

<img src="{{ '/assets/images/Screenshot%202025-12-17%20142759.png' | relative_url }}" alt="Screenshot 2025-12-17 142759" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-17%20143022.png' | relative_url }}" alt="Screenshot 2025-12-17 143022" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then click the view cube and line up the stl with the red line and adjust the depth below top to 1 inch. Click Import while on the Position relative to the Modeling Plane to cut down the base.

<img src="{{ '/assets/images/Screenshot%202025-12-17%20143151.png' | relative_url }}" alt="Screenshot 2025-12-17 143151" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-17%20143347.png' | relative_url }}" alt="Screenshot 2025-12-17 143347" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> 
Then click component properties and change the shape height to to 1 and the base height .25 and click close.

<img src="{{ '/assets/images/Screenshot%202025-12-17%20143601.png' | relative_url }}" alt="Screenshot 2025-12-17 143601" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Go to the design tab and click 2D view and click the alignment tool and then the center tool. Once thats done click close. Then click on create vectors under design and click the rectangle and make it 2.5 x 3.

<img src="{{ '/assets/images/Screenshot%202025-12-17%20143653.png' | relative_url }}" alt="Screenshot 2025-12-17 143653" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then go to the toolpaths tab and make sure you are in the 3D view and click on the 3D roughing icon. Insert the tool by selecting a 25mm flute end mill under the carvera tools menu when inserting tool. Make the machining allowance 0.024in and click calculate.

<img src="{{ '/assets/images/Screenshot%202025-12-17%20144103.png' | relative_url }}" alt="Screenshot 2025-12-17 144103" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">


<img src="{{ '/assets/images/Screenshot%202025-12-17%20144608.png' | relative_url }}" alt="Screenshot 2025-12-17 144608" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-17%20144632.png' | relative_url }}" alt="Screenshot 2025-12-17 144632" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then click on the 3D finishing tool path and select the 1/8 ball nose bit. Then name the tool path and click calculate. 

<img src="{{ '/assets/images/Screenshot%202025-12-17%20144706.png' | relative_url }}" alt="Screenshot 2025-12-17 144706" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Lastly, click on the 2d view and select the 2d profile toolpath. Then select the 25mm flute end again and make sure to select the box made previously when going through these steps. Turn machine vectors on and name the toolpath before calculating. Then click calculate. 

<img src="{{ '/assets/images/Screenshot%202025-12-17%20144830.png' | relative_url }}" alt="Screenshot 2025-12-17 144830" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">


<img src="{{ '/assets/images/Screenshot%202025-12-17%20145511.png' | relative_url }}" alt="Screenshot 2025-12-17 145511" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-17%20145523.png' | relative_url }}" alt="Screenshot 2025-12-17 145523" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then from the toolpaths menu select preview all toolpaths and view if the paths are traveling correctly. 

<img src="{{ '/assets/images/Screenshot%202025-12-17%20145555.png' | relative_url }}" alt="Screenshot 2025-12-17 145555" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then click file->save as and then name the file to save your progress. In the toolpaths menu select the save toolpaths icon and make sure all the toolpaths are selected and that the post processor is the Carvera ATC, the machine is the carvera cnc machine and then click save toolpaths and name the file. 

<img src="{{ '/assets/images/Screenshot%202025-12-17%20145803.png' | relative_url }}" alt="Screenshot 2025-12-17 145803" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-17%20145842.png' | relative_url }}" alt="Screenshot 2025-12-17 145842" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Once the files are saved take a piece of pine wood and align it with the corner of the work bed and secure it with the carver clamps.

<img src="{{ '/assets/images/IMG_0685.jpg' | relative_url }}" alt="IMG_0685" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

Then open the Carvera app on the computer connected the Carvera CNC machine and select the icon in the bottom left corner that looks like a document. Then in the menu that just popped up click upload and select to bring your file into the machine. Then once the file has been selected open click on the hamburger icon in the corner and select the move tool then home the axis. After that select the run G-code icon which looks like a gear and play button. Then turn on the auto vaccum and turn on auto Leveling and after that select run and wait for the topgrapghy to be milled.

<img src="{{ '/assets/images/Screenshot%202025-10-31%20153318.png' | relative_url }}" alt="Screenshot 2025-10-31 153318" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-10-31%20153328.png' | relative_url }}" alt="Screenshot 2025-10-31 153328" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-12-12%20102943.png' | relative_url }}" alt="Screenshot 2025-12-12 102943" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

<img src="{{ '/assets/images/Screenshot%202025-10-31%20153353.png' | relative_url }}" alt="Screenshot 2025-10-31 153353" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">

I Then took the finalized topograpghy and used the Ban saw to cut off the chin that came with the cnc cut because I aligned the stl on the left corner of the pine wood block.

<img src="{{ '/assets/images/IMG_0684.jpg' | relative_url }}" alt="IMG_0684" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;">
