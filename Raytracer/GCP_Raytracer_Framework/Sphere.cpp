#include "Sphere.h"

void rayIntersect(Ray ray)
{

	//shortest distance from ray to centre of sphere
	//distance from closest point on ray to intersection point
	glm::vec3 a = ray.Origin;
	glm::vec3 n = ray.Direction;
	glm::vec3 P = {0,0,0}; //sphere position
	
	

	float r = 4.0f; //radius of sphere
	float d; //shortest distance form ray to centre of sphere
	float x; //distance from closest point on ray to intersection point



	//a + ((P - a) dot n) - x)n

	//x = sqrt(r^2 - d^2)

	//d = ||P - a - ((P - a) dot n)n||



	////////////check if ray origin is inside sphere////////////////




	////////calculate 'd' and perform the intersection check//////////





	//////////calculate closest intersection point/////////





	////////////check if intersection is in front of or behind the rays origin/direction






	//////////return that there was an intersection and intersection point///////////

	//returns
	bool intersected;
	glm::vec3 intersectPos;

}