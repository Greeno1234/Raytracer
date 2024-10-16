#pragma once

#include <GLM/glm.hpp>
#include <vector>
#include "Sphere.h"

class RayTracer
{

public:
//list of objects in scene e.g.
	

	glm::vec3 traceRay(); //returns a vec3 colour
	// have a loop that goes through each object in the scene and call its ray intersect function
	//for the closest intersection, call the objects shade function and return the colour it gives

	void addSphere();

protected:
	std::vector<Sphere*> list;
};

