#include <LamoEngine/Renderer/renderer.h>
#include <LamoEngine/Renderer/camera.h>
#include <LamoEngine/Sprite/sprite.h>
#include <LamoEngine/Renderer/scene.h>
#include <LamoEngine/Core/core.h>
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
	

	return 0;
}
