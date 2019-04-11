#ifndef NEWSCENE_H
#define NEWSCENE_H

#include <LamoEngine/Renderer/scene.h>
#include <LamoEngine/Renderer/entity.h>

class NewScene : public Scene
{
public:
	NewScene();
	virtual ~NewScene();

private:
	Entity* pencils;
	Entity* kingkong;
	Entity* rgba;
};
#endif

