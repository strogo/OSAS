#include "UIWindow.h"

namespace OSAS
{
	namespace UI
	{
		UIWindow::UIWindow()
		{
		}

		UIWindow::~UIWindow()
		{
		}

		void UIWindow::Show()
		{
			showing = true;
		}
		void UIWindow::Hide()
		{
			showing = false;
		}
		std::string UIWindow::GetName()
		{
			return name;
		}
	}
}