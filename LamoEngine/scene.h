#ifndef SCENE_H
#define SCENE_H

#include <LamoEngine/camera.h>
#include <LamoEngine/sprite.h>
#include <LamoEngine/entity.h>

class Scene : public Entity
{
public:
	Scene(); ///< @brief Scene Constructor
	virtual ~Scene(); ///< @brief Scene Destructor

	
	bool active() { return _active; };
	
	void start() { _active = true; };
	
	void stop() { _active = false; };

	Camera* camera() { return _camera; };


private:

	bool _active;

	Camera* _camera;

};

#endif
