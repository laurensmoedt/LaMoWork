#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <LaMoEngine/Renderer/scene.h>
#include <LaMoEngine/Renderer/renderer.h>

class Scenemanager
{
public:
	Scenemanager();
	virtual ~Scenemanager();

	void loadScene(Scene* scene);
	void clearScene();
private:
	Renderer* renderer;

};
#endif 

