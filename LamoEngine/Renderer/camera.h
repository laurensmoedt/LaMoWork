#ifndef CAMERA_H
#define CAMERA_H

#include <GL/glew.h>
#include <glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <LamoEngine/Sprite/sprite.h>
#include <LamoEngine/Renderer/entity.h>

class Camera : public Entity
{
public:
	Camera(); ///< @brief Camera Constructor
	virtual ~Camera(); ///< @brief Camera Destructor

	void computeMatricesFromInputs(GLFWwindow* window);

	glm::mat4 getViewMatrix() { return _viewMatrix; };
	glm::vec3 getCursor() { return cursor; };

private:
	glm::mat4 _viewMatrix;


	glm::vec3 position;
	glm::vec3 cursor;

	// Right and up vector
	glm::vec3 _right;
	glm::vec3 _up;

	float speed;
};

#endif
