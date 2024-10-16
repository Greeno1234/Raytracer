#include "Camera.h"




Ray getRay(glm::ivec2 winPos)
{
	Ray currentRay;

	currentRay.Origin = {winPos.x,winPos.y,0.0f};
	currentRay.Direction = {0,0,1};



	return currentRay;
}