#ifndef DRAWING_H
#define DRAWING_H

#include <Windows.h>

#include "imgui/imgui.h"

class Drawing
{
private:
	static ImVec2 vWindowSize;
	static ImGuiWindowFlags WindowFlags;
	static bool bDraw;

public:
	static void Active();
	static bool isActive();
	static void Draw();
};

#endif
