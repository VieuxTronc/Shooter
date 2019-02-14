#pragma once

#include "pch.h"
#include "Entity.h"
#include "SFML/Graphics.hpp"

class UIText : public Entity
{
public:
	UIText(string _txt, unsigned int _size, sf::Vector2f _pos);
	~UIText();

	virtual sf::Drawable* GetDrawable() { return &mText; }

	void UpdateText(string _txt); 

	void SetSelected(bool _isSelected);
	bool IsSelected();

private: 
	sf::Text mText;
	string mTextString; 
	unsigned int mSize; 
	bool mIsSelected; 
	sf::Color mColor; 
	sf::Font mFont; 
};

