# FreeFormHolders
This project loads a 3D OBJ model and creates the geometry of a holder, done as part of an "Algorithms for Modeling, Fabrication and Printing of 3D Objects" course at Tel Aviv University by Dr. Amit Bermano.

Our implementation follows the lines of [AutoConnect](https://koyama.xyz/project/AutoConnect/autoconnect.pdf)'s free form holders expansion algorithm.

Checkout [this link](https://docs.google.com/presentation/d/1iXRJTI04CF0LziQAyYKzkco6TlmEUyykz0laJ6W-DAI/edit?usp=sharing) for a short presentation of this project.

## Dependencies  
* [libigl](https://libigl.github.io/) for geometry processing

## Instructions
* A 3D model geometry is loaded
* Select a source point on the model
* The cut is calculated using geodesic distances from the source point, and is marked red
* This parameter is configurable using the 'Max Distance %' box
* Pressing '1' finalizes the cut and creates the holder
* Pressing '2' clears the mesh in order to choose a new source point
* Pressing '3' loads a new 3D model
* Pressing '4' saves the holder to an OBJ file

| Action  | Example |
| ------------- | ------------- |
| Creating a cut  | <img src="https://github.com/Verose/FreeFormHolders/blob/master/gifs/cut.gif" width="400" height="360" /> |
| Clearing and selecting a new cut |<img src="https://github.com/Verose/FreeFormHolders/blob/master/gifs/clear_and_cut.gif" width="400" height="360" /> |
| Changing geodesic distance | <img src="https://github.com/Verose/FreeFormHolders/blob/master/gifs/distance.gif" width="400" height="360" /> |
| Changing normal stride | <img src="https://github.com/Verose/FreeFormHolders/blob/master/gifs/normal.gif" width="400" height="360" /> |

## Demo
<img src="https://github.com/Verose/FreeFormHolders/blob/master/gifs/demo.gif" />
