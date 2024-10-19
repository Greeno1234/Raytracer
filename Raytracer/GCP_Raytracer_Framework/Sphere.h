#pragma once
#include "GCP_GFX_Framework.h"
#include "Ray.h"



class Sphere
{
	
public:
	glm::vec3 position;
	float radius;
	//colour

	void rayIntersect(Ray ray);




	glm::vec3 shade(glm::vec3 pointIntersect);



	void getNormal(glm::vec3 value);





};

