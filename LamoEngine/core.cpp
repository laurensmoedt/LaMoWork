#include "core.h"
#include <cstdlib>


Core::Core()
{
	
}


Core::~Core()
{

}

void Core::activate(Scene* scene, Renderer* renderer) 
{
	//renders scene
	renderer->renderScene(scene);

	if (glfwGetKey(renderer->window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(renderer->window()) == 1) { scene->stop(); }
}
