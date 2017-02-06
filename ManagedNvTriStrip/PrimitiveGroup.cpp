
#include "PrimitiveGroup.h"
#include "ConversionHelper.h"

namespace ManagedNvTriStrip
{
	PrimitiveGroup::PrimitiveGroup(NativePrimitiveGroup* native)
	{
		m_Type = (PrimitiveType)native->type;
		m_Indices = ConversionHelper::FromNative(native->indices, native->numIndices);
	}
};