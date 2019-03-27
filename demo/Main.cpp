// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <LamoEngine/renderer.h>
#include <LamoEngine/camera.h>
#include <LamoEngine/sprite.h>
#include <LamoEngine/scene.h>
#include <LamoEngine/core.h>
#include "newScene.h"

int main( void )
{
	Renderer* renderer = new Renderer(1280, 720);
	Core* core = new Core();
	NewScene* newScene = new NewScene();

	while (newScene->active())
	{
		core->activate(newScene, renderer);
	} 
	delete newScene;
	
	//terminate GLFW
	glfwTerminate();

	return 0;
}
