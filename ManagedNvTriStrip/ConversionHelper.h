#pragma once

namespace ManagedNvTriStrip
{
	class ConversionHelper
	{
	public:
		// from native
		static array<unsigned short>^ FromNative(unsigned short* dataPtr, const unsigned int len);

		// to native
		static unsigned short* ToNative(array<unsigned short>^);
	};
}
