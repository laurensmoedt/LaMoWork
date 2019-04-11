#include "scene.h"



Scene::Scene() : Entity()
{
	_active = true;

	_camera = new Camera();
	
}


Scene::~Scene() 
{

}
