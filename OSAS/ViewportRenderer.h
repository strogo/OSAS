#pragma once
#include "Shader.h"
namespace OSAS {
	namespace core {
		class ViewportRenderer {
		public:
			ViewportRenderer();
			ViewportRenderer();
			void Render();
			void Resize(int width, int height);
		private:
			Shader shader;
		};
}

}