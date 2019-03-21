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

	Camera* camera() { return _camera; };

private:
	Camera* _camera;

};

#endif /* SCENE_H */
