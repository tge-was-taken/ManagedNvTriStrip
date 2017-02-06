
#include "ConversionHelper.h"

namespace ManagedNvTriStrip
{
	array<unsigned short>^ ConversionHelper::FromNative(unsigned short* pData, const unsigned int len)
	{
		auto arr = gcnew array<unsigned short>(len);

		for (int i = 0; i < len; i++)
		{
			arr[i] = pData[i];
		}

		return arr;
	}

	unsigned short* ConversionHelper::ToNative(array<unsigned short>^ value)
	{
		unsigned short* pData = new unsigned short[value->Length];
		
		for (int i = 0; i < value->Length; i++)
		{
			pData[i] = value[i];
		}

		return pData;
	}
}