#include <cstdlib>

#include "core.h"

Core::Core()
{
	
}


Core::~Core()
{
	//terminate GLFW
	glfwTerminate();
}

void Core::activate(Scene* scene, Renderer* renderer) 
{
	//renders scene
	renderer->renderScene(scene);
	Input::getInstance()->init(renderer->window());
	if (glfwGetKey(renderer->window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(renderer->window()) == 1) { scene->stop(); }
}
