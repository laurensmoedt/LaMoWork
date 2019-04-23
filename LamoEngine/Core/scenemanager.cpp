#include "scenemanager.h"



Scenemanager::Scenemanager()
{
	renderer = new Renderer(1280, 720);
}


Scenemanager::~Scenemanager()
{

}

void Scenemanager::loadScene(Scene* scene) 
{
	
	renderer->renderScene(scene);
}

void Scenemanager::clearScene() 
{
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

