#pragma once

#include <GLM/glm.hpp>
#include "Ray.h"

class Camera
{
	//viewing matrices viewing matrix projection matrix 
	glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);

	glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::vec3 cameraDirection = glm::normalize(cameraPos - cameraTarget);


	glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
	glm::vec3 cameraRight = glm::normalize(glm::cross(up, cameraDirection));

	glm::vec3 cameraUp = glm::cross(cameraDirection, cameraRight);


	





	public:
		Ray getRay(glm::ivec2 winPos); //return ray




};

