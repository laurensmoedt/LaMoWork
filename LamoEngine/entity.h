#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>
#include <vector>

#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/matrix_decompose.hpp>

#include <LamoEngine/sprite.h>
#include <LamoEngine/input.h>


class Entity
{

public:
	Entity(); ///< @brief Entity Constructor
	virtual ~Entity(); ///< @brief Entity Destructor

	glm::vec3 position;
	glm::vec3 scale;
	float rotation;

	Sprite* _sprite;

	Entity* _parent;
	std::vector<Entity*> _children;

	Entity* parent() { return _parent; };

	Sprite* sprite() { return _sprite; };
	void addSprite(const std::string& imagepath);


	void addChild(Entity* child);
	void removeChild(Entity* child);

	const std::vector<Entity*>& getChildren() { return _children; };

	int guid() { return _guid; };


private:
	int _guid;
	static int _nextGuid;

	

	void removeSprite() {
		if (_sprite != nullptr) {
			delete _sprite;
			_sprite = nullptr;
		}
	};
};
#endif 
