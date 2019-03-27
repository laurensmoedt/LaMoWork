// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <LamoEngine/renderer.h>
#include <LamoEngine/camera.h>
#include <LamoEngine/sprite.h>
#include <LamoEngine/entity.h>
#include <LamoEngine/scene.h>
#include <LamoEngine/core.h>

int main( void )
{
	Renderer* renderer = new Renderer(1280, 720);
	Core* core = new Core();
	Scene* scene = new Scene();

	while (scene->active())
	{
		core->activate(scene, renderer);
	} 
	delete scene;
	
	//terminate GLFW
	glfwTerminate();

	return 0;
}
