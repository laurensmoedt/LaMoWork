#include "newScene.h"



NewScene::NewScene() : Scene()
{
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


NewScene::~NewScene()
{
	delete pencils;
	delete kingkong;
	delete rgba;
}