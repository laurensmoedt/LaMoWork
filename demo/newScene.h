#ifndef NEWSCENE_H
#define NEWSCENE_H

#include <LamoEngine/scene.h>
#include <LamoEngine/entity.h>

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

