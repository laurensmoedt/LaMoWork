// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <LamoEngine/renderer.h>
#include <LamoEngine/camera.h>
#include <LamoEngine/sprite.h>
#include <LamoEngine/entity.h>
#include <LamoEngine/scene.h>

int main( void )
{
	Renderer renderer(1280, 720);

	Scene* scene = new Scene();

	while (glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE) != GLFW_PRESS &&	// Check if the ESC key was pressed or the window was closed
			glfwWindowShouldClose(renderer.window()) == 0)
	{

		renderer.renderScene(scene);
		
		//glm::vec3 cursor = getCursor(); // from Camera
		//printf("(%f,%f)\n",cursor.x, cursor.y);
	} 
	
	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
