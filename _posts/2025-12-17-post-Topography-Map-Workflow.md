# Journal: Topograpghy map 12-17-2025

## Workflow 

To start use the Terrain2stl genarator and plot a place on the virtual map and modify the settings to adjust the size of the box and the vertical scaling and water drop to make the features of the mountain more pronounced.  

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later
Then generate the file and download the stl.

Open Aspire and begin by creating a new file and adjust the job size to 2.5 x 3.5 x 1 and set the z zero position to the top. Then set the X Datumn to the bottom left. Then click OK.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then go to the Modeling tab and click on import 3d model to import the stl file. Then change the model size to 2.5 x 3.5 x 1 and set units to inches. make sure to unlock the xyz ratio before you type in those previous values. Then click apply and then center the model.Lastly, click posistion and Import. 

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then click the view cube and line up the stl with the red line and adjust the depth below top to 1 inch. Click Import while on the Position relative to the Modeling Plane to cut down the base.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then click component properties and change the shape height to to 1 and the base height .25 and click close.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Go to the design tab and click 2D view and click the alignment tool and then the center tool. Once thats done click close. Then click on create vectors under design and click the rectangle and make it 2.5 x 3.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then go to the toolpaths tab and make sure you are in the 3D view and click on the 3D roughing icon. Insert the tool by selecting a 25mm flute end mill under the carvera tools menu when inserting tool. Make the machining allowance 0.024in and click calculate.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then click on teh #D finishing tool path and select the 1/8 ball nose bit. Then name the tool path and click calculate. 

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Lastly, click on the 2d view and select the 2d profile toolpath. Then select the 25mm flute end again and make sure to select the box made previously when going through these steps. Turn machine vectors on and name the toolpath before calculating. Then click calculate. 

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then from the toolpaths menu select preview all toolpaths and view if the paths are traveling correctly. 

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then click file>save as and name the file to save your progress. In the toolpaths menu select the save toolpaths icon and make sure all the toolpaths are selected and that the post processor is the Carvera ATC, the machine is the carvera cnc machine and then click save toolpaths and name the file. 

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later

Then open the Carvera app on the computer connected the Carvera CNC machine and select the icon in the bottom left corner that looks like a document. Then in the menu that just popped up click upload and select to bring your file into the machine. Then once the file has been selected open click on the hamburger icon in the corner and select the move tool then home the axis. After that select the run G-code icon which looks like a gear and play button. Then turn on the auto vaccum and turn on auto Leveling and after that select run and wait for the topgrapghy to be milled.

<img src="{{ '/assets/images/IMG_0659.jpg' | relative_url }}" alt="IMG_0659" style="max-width:650px;width:100%;height:auto;display:block;margin:18px 0;"> // change later
