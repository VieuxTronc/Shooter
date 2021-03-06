#pragma once

#include "pch.h"
#include <SFML/Graphics.hpp>
#include "SFML/Graphics/Rect.hpp"

class Entity
{
public:
	Entity();
	~Entity();

	void CreateEntity(std::string _spritePath, sf::Vector2f _pos, sf::Vector2f _velocity = sf::Vector2f(0.0f, 0.0f));

	virtual void DestroyEntity() {};

	void SetEntityID(int _id) { mEntityID = _id; }
	int GetEntityID() { return mEntityID; }

	virtual void SetEntityPosition(sf::Vector2f _pos) { mPosition = _pos; }
	sf::Vector2f GetEntityPosition() { return mPosition; }

	virtual sf::Drawable* GetDrawable() { return &mSprite; }
	virtual sf::Drawable* GetDebugDrawable() { return &mDebugRectShape; }

	void SetEntityRotation(float _angle);
	float GetEntityRotation() { return mAngle; }

	virtual void MoveEntity(sf::Vector2f _velocity, float _dt) {};
	virtual void MoveEntity(float _dt) {};

	virtual void SetEntitySpeed(float _newSpeed) { mSpeed = _newSpeed; }
	float GetEntitySpeed() { return mSpeed; }

	virtual void UpdateEntity(float _dt) {};
	virtual void UpdateEntity() {};
	virtual void UpdateDebugDrawable();
	
	virtual void CheckIfEntityIsAlive() {};
	virtual bool IsEntityAlive() { return mIsAlive; }

	void SetEntityLifeTime(float _newTime) { mLifeTime = _newTime; }
	float GetEntityLifeTime() { return mLifeTime; }

	virtual void Fire() {};
	virtual void CheckEntityCollision() {};

	sf::FloatRect GetEntityRect() { return mRect; }

	void SetEntityTag(string _tag) { mTag = _tag; }
	string GetEntityTag() { return mTag; }

	virtual void ApplyDamage(Entity* _projectile) {};
	virtual float GetProjectileDamage() { return mDamage; }

protected:
	sf::Texture mTexture;
	sf::Sprite mSprite;
	sf::Vector2f mPosition;
	sf::Vector2f mVelocity;
	sf::Vector2f mSpawnPosition;
	sf::FloatRect mRect;
	sf::RectangleShape mDebugRectShape;
	sf::Vector2f mSize;
	string mTag; 
	float mAngle;
	bool mIsAlive;
	float mSpeed = 135.0f; 
	float mLifeTime;
	int mEntityID; 

	//May need some kind of "livingComponent"
	float mLifePoints = 100.0f;
	float mDamage = 10.0f; 
};

