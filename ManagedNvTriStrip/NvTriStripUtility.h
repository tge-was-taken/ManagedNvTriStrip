#pragma once

#include "NvTriStrip.h"
#include "PrimitiveGroup.h"

namespace ManagedNvTriStrip 
{
	/// <summary>
	/// Utility class providing methods for optimizing and stripping mesh indices.
	/// </summary>
	public ref class NvTriStripUtility abstract sealed
	{
	public:
		/// <summary>
		/// Gets or sets if the utility should use primitive restarts. If restarting is enabled then stitching of the strips is forced.
		/// Default is true.
		/// </summary>
		static PROP_RW_AUTO(bool, UseRestart, m_UseRestart);

		/// <summary>
		/// Gets or sets the primitive restart value used if primitive restart is enabled.
		/// </summary>
		static PROP_RW_AUTO(unsigned int, RestartValue, m_RestartValue);

		/// <summary>
		/// Gets or sets the cache size which the stripifier uses to optimize the data.
		/// Controls the length of the generated individual strips.
		/// Default is 16.
		/// </summary>
		static PROP_RW_AUTO(unsigned int, CacheSize, m_CacheSize);

		/// <summary>
		/// Gets or sets if the utility should stitch the strips together into one huge strip or not.
		/// If set to true, you'll get back one huge strip stitched together using degenerate triangles.
		/// If set to false, you'll get back a large number of separate strips.
		/// Default is true.
		/// </summary>
		static PROP_RW_AUTO(bool, StitchStrips, m_StitchStrips);

		/// <summary>
		/// Gets or sets the minimum acceptable size for a strip, in triangles.
		/// All strips generated which are shorter than this will be thrown into one big, separate list.
		/// Default is 0.
		/// </summary>
		static PROP_RW_AUTO(unsigned int, MinStripSize, m_MinStripSize);

		/// <summary>
		/// If set to true, will return an optimized list, with no strips at all.
		/// </summary>
		static PROP_RW_AUTO(bool, ListsOnly, m_ListsOnly);

		/// <summary>
		/// Generates strips from the given triangle indices and returns an array of stripped, optimized primitive groups.
		/// </summary>
		static bool Stripify(array<unsigned short>^ indices, array<PrimitiveGroup^>^ %primitiveGroups);

		/// <summary>
		/// Generates strips from the given triangle indices and returns an array of stripped, optimized primitive groups.
		/// </summary>
		static bool Stripify(array<unsigned short>^ indices, array<PrimitiveGroup^>^ %primitiveGroups, bool validate);

	private:
		const static bool			USE_RESTART_DEFAULT		= false;
		const static unsigned int	CACHE_SIZE_DEFAULT		= 16;
		const static bool			STITCH_STRIPS_DEFAULT	= true;
		const static unsigned int	MIN_STRIP_SIZE_DEFAULT	= 0;
		const static bool			LISTS_ONLY_DEFAULT		= false;

		static bool			m_UseRestart	= USE_RESTART_DEFAULT;
		static unsigned int m_RestartValue	= 0;
		static unsigned int m_CacheSize		= CACHE_SIZE_DEFAULT;
		static bool			m_StitchStrips	= STITCH_STRIPS_DEFAULT;
		static unsigned int m_MinStripSize	= MIN_STRIP_SIZE_DEFAULT;
		static bool			m_ListsOnly		= LISTS_ONLY_DEFAULT;
	};
}
