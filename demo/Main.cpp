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
	Sprite* pencils = new Sprite("assets/pencils.tga");
	//Sprite* kingkong = new Sprite("assets/kingkong.tga");
	//Sprite* rgba = new Sprite("assets/rgba.tga");

	Scene* scene = new Scene();

	//float rot_z = 0.0f;

	while (glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE) != GLFW_PRESS &&	// Check if the ESC key was pressed or the window was closed
			glfwWindowShouldClose(renderer.window()) == 0)
	{

		renderer.renderScene(scene);
		
		//glm::vec3 cursor = getCursor(); // from Camera
		//printf("(%f,%f)\n",cursor.x, cursor.y);

		// Render all Sprites (Sprite*, xpos, ypos, xscale, yscale, rotation)
		renderer.renderSprite(pencils, 900, 400, 1.0f, 1.0f, 0.0f);
		//renderer.renderSprite(kingkong, 900, 400, 1.0f, 1.0f, 0.0f);
		//renderer.renderSprite(rgba, renderer.width()/2, renderer.height()/2, 3.0f, 3.0f, rot_z);
		//rot_z += 0.03f;
	} 
	

	delete pencils;
	//delete kingkong;
	//delete rgba;

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
