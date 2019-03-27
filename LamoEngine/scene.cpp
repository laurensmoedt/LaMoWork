#include "scene.h"



Scene::Scene() : Entity()
{
	_active = true;

	_camera = new Camera();

	pencils = new Entity();
	pencils->addSprite("assets/pencils.tga");
	this->addChild(pencils);

	kingkong = new Entity();
	kingkong->addSprite("assets/kingkong.tga");
	this->addChild(kingkong);

	rgba = new Entity();
	rgba->addSprite("assets/rgba.tga");
	this->addChild(rgba);
	
}


Scene::~Scene() 
{
	delete pencils;
	delete kingkong;
	delete rgba;
}
