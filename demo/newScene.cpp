#include "newScene.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>


NewScene::NewScene() : Scene()
{
	pencils = new Entity();
	pencils->addSprite("assets/pencils.tga");
	this->addChild(pencils);

	kingkong = new Entity();
	kingkong->addSprite("assets/kingkong.tga");
	this->addChild(kingkong);
	kingkong->position = glm::vec3(200.0f, 200.0f, 0.0f);

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