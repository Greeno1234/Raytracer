#pragma once
#include "GCP_GFX_Framework.h"



class Sphere
{
	
public:
	glm::vec3 Position;
	float Radius;
	//colour

	void rayIntersect(bool intersected, glm::vec3 intersectPos);
	glm::vec3 shade(glm::vec3 pointIntersect);



	void getNormal(glm::vec3 value);





};

