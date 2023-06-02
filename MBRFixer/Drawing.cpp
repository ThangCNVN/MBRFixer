#include "Drawing.h"
#include "mbrdata.h"

ImVec2 Drawing::vWindowSize = { 500, 300 };
ImGuiWindowFlags Drawing::WindowFlags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize;
bool Drawing::bDraw = true;

void Drawing::Active()
{
	bDraw = true;
}

bool Drawing::isActive()
{
	return bDraw == true;
}

int selectedItem = -1;
const char* items[] = { "Windows 10 (22H2)" };
const int itemCount = sizeof(items) / sizeof(items[0]);

int selectedItem1 = -1;
const char* items1[] = { "32bit", "64bit"};
const int itemCount1 = sizeof(items1) / sizeof(items1[0]);


void Drawing::Draw()
{
	if (isActive())
	{
		
		ImGui::SetNextWindowSize(vWindowSize);
		ImGui::SetNextWindowBgAlpha(1.0f);
		ImGuiWindowFlags windowFlags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar;
		ImGui::Begin("MBRFixer", &bDraw, windowFlags);

		ImGui::Text("MBRFixer - Master Boot Record Recovery Tool");

		ImGui::ListBox("Windows Version", &selectedItem, items, itemCount);
		ImGui::ListBox("Bit", &selectedItem1, items1, itemCount1);

		if (ImGui::Button("Fix MBR")) {
			if (selectedItem == 0 && selectedItem1 == 1) {
				MBRData::overwrite(1022264);
			}
			if (selectedItem == 0 && selectedItem1 == 0) {
				MBRData::overwrite(1022232);
			}
		}

		ImGui::SetCursorPosX(10);
		ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 29);
		if (ImGui::Button("Exit")) {
			bDraw = false;
		}

		ImGui::End();
	}


	#ifdef _WINDLL
	if (GetAsyncKeyState(VK_INSERT) & 1)
		bDraw = !bDraw;
	#endif
}
