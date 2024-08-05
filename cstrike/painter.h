#pragma once
#include "utilities/draw.h"
class Painter
{

public:
	Painter();
	virtual void Draw(ImDrawList* pDrawList) = 0;
	virtual ~Painter() = default;
};
