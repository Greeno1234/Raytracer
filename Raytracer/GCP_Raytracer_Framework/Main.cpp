
#include "GCP_GFX_Framework.h"
#include "Camera.h"
#include "Ray.h"
#include "RayTracer.h"




int main(int argc, char* argv[])
{
	// Set window size
	glm::ivec2 winSize(640, 480);

	// This will handle rendering to screen
	GCP_Framework _myFramework;

	// Initialises SDL and OpenGL and sets up a framebuffer
	if (!_myFramework.Init(winSize))
	{
		return -1;
	}

	//create a camera and a ray tracer
	RayTracer rayTracer;
	// add spheres to ray tracer

	Camera cam;





	// Preparing a position to draw a pixel
	glm::ivec2 pixelPosition = winSize / 2;

	// Preparing a colour to draw
	// Colours are RGB, each value ranges between 0 and 1
	glm::vec3 pixelColour(1, 0, 0);

	
	// Sets all pixels the same colour
	_myFramework.SetAllPixels( glm::vec3(0.1f,0.1f,0.3f) );


	

	
	for (size_t x = 0; x < winSize.x; x++)
	{
		for (size_t y = 0; y < winSize.y; y++)
		{
			glm::ivec2 pixelPosition(x, y);
			cam.getRay(pixelPosition);// return a ray

			

		}


	}
	// Draws a single pixel
	_myFramework.DrawPixel(pixelPosition, pixelColour);





	// Pushes the framebuffer to OpenGL and renders to screen
	// Also contains an event loop that keeps the window going until it's closed
	_myFramework.ShowAndHold();
	return 0;


}
