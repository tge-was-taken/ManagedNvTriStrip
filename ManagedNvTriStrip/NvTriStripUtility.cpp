
#include "NvTriStripUtility.h"
#include "ConversionHelper.h"
#include <memory>

using namespace System::Runtime::InteropServices;

namespace ManagedNvTriStrip
{
	bool NvTriStripUtility::GenerateStrips(array<unsigned short>^ indices, [Out]array<PrimitiveGroup^>^ %primitiveGroups)
	{
		return GenerateStrips(indices, primitiveGroups, true);
	}

	bool NvTriStripUtility::GenerateStrips(array<unsigned short>^ indices, [Out]array<PrimitiveGroup^>^ %primitiveGroups, bool validate)
	{
		if (m_UseRestart != USE_RESTART_DEFAULT)
		{
			EnableRestart(m_RestartValue);
		}

		if (m_CacheSize != CACHE_SIZE_DEFAULT)
		{
			SetCacheSize(m_CacheSize);
		}

		if (m_StitchStrips != STITCH_STRIPS_DEFAULT)
		{
			SetStitchStrips(m_StitchStrips);
		}

		if (m_MinStripSize != MIN_STRIP_SIZE_DEFAULT)
		{
			SetMinStripSize(m_MinStripSize);
		}

		if (m_ListsOnly != LISTS_ONLY_DEFAULT)
		{
			SetListsOnly(m_ListsOnly);
		}

		// create input params
		unsigned short* in_indices = ConversionHelper::ToNative(indices);
		NativePrimitiveGroup* primGroups = nullptr;
		unsigned short numGroups = 0;

		bool success = ::GenerateStrips(in_indices, (unsigned int)indices->Length,
			&primGroups, &numGroups, validate);

		primitiveGroups = gcnew array<PrimitiveGroup^>(numGroups);
		for (int i = 0; i < primitiveGroups->Length; i++)
			primitiveGroups[i] = gcnew PrimitiveGroup(&primGroups[i]);

		if (in_indices)
			delete[] in_indices;

		if (primGroups)
			delete[] primGroups;

		return success;
	}
}