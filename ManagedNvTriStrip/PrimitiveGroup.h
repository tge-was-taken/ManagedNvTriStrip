#pragma once

#include "NvTriStrip.h"
#include "Properties.h"

typedef PrimitiveGroup NativePrimitiveGroup;

namespace ManagedNvTriStrip
{
	/// <summary>
	/// Enumeration for the types of primitives used in primitive groups.
	/// </summary>
	public enum class PrimitiveType
	{
		TriangleList	= PrimType::PT_LIST,
		TriangleStrip	= PrimType::PT_STRIP,
		TriangleFan		= PrimType::PT_FAN
	};

	/// <summary>
	/// A primitive group contains optimized and/or stripped index data in a specified primitive format.
	/// </summary>
	public ref class PrimitiveGroup
	{
	public:
		/// <summary>
		/// Gets the primitive type of the group.
		/// </summary>
		PROP_R_AUTO(PrimitiveType, Type, m_Type);

		/// <summary>
		/// Gets the number of indices in the index array.
		/// </summary>
		PROP_R_AUTO(int, IndexCount, m_Indices->Length);

		/// <summary>
		/// Gets the indices of the group.
		/// </summary>
		PROP_R_AUTO(array<unsigned short>^, Indices, m_Indices);

	internal:
		/// <summary>
		/// Initialize a new instance using a pointer to the native primitive group.
		/// </summary>
		PrimitiveGroup(NativePrimitiveGroup* native);

	private:
		PrimitiveType m_Type;
		array<unsigned short>^ m_Indices;
	};
}