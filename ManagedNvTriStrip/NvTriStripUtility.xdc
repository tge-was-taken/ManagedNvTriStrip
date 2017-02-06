<?xml version="1.0"?><doc>
<members>
<member name="T:ManagedNvTriStrip.PrimitiveType" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="10">
<summary>
Enumeration for the types of primitives used in primitive groups.
</summary>
</member>
<member name="T:ManagedNvTriStrip.PrimitiveGroup" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="20">
<summary>
A primitive group contains optimized and/or stripped index data in a specified primitive format.
</summary>
</member>
<member name="P:ManagedNvTriStrip.PrimitiveGroup.Type" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="26">
<summary>
Gets the primitive type of the group.
</summary>
</member>
<member name="P:ManagedNvTriStrip.PrimitiveGroup.IndexCount" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="31">
<summary>
Gets the number of indices in the index array.
</summary>
</member>
<member name="P:ManagedNvTriStrip.PrimitiveGroup.Indices" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="36">
<summary>
Gets the indices of the group.
</summary>
</member>
<member name="M:ManagedNvTriStrip.PrimitiveGroup.Dispose" decl="true" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="41">
<summary>
Frees managed and unmanaged resources.
</summary>
</member>
<member name="M:ManagedNvTriStrip.PrimitiveGroup.#ctor(PrimitiveGroup*)" decl="true" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\primitivegroup.h" line="47">
<summary>
Initialize a new instance using a pointer to the native primitive group.
</summary>
</member>
<member name="T:ManagedNvTriStrip.NvTriStripUtility" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="9">
<summary>
Utility class providing methods for optimizing and stripping mesh indices.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.UseRestart" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="15">
<summary>
Gets or sets if the utility should use primitive restarts. If restarting is enabled then stitching of the strips is forced.
Default is true.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.RestartValue" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="21">
<summary>
Gets or sets the primitive restart value used if primitive restart is enabled.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.CacheSize" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="26">
<summary>
Gets or sets the cache size which the stripifier uses to optimize the data.
Controls the length of the generated individual strips.
Default is 16.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.StitchStrips" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="33">
<summary>
Gets or sets if the utility should stitch the strips together into one huge strip or not.
If set to true, you'll get back one huge strip stitched together using degenerate triangles.
If set to false, you'll get back a large number of separate strips.
Default is true.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.MinStripSize" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="41">
<summary>
Gets or sets the minimum acceptable size for a strip, in triangles.
All strips generated which are shorter than this will be thrown into one big, separate list.
Default is 0.
</summary>
</member>
<member name="P:ManagedNvTriStrip.NvTriStripUtility.ListsOnly" decl="false" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="48">
<summary>
If set to true, will return an optimized list, with no strips at all.
</summary>
</member>
<member name="M:ManagedNvTriStrip.NvTriStripUtility.Stripify(System.UInt16[],ManagedNvTriStrip.PrimitiveGroup[]@)" decl="true" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="53">
<summary>
Generates strips from the given triangle indices and returns an array of stripped, optimized primitive groups.
</summary>
</member>
<member name="M:ManagedNvTriStrip.NvTriStripUtility.Stripify(System.UInt16[],ManagedNvTriStrip.PrimitiveGroup[]@,System.Boolean)" decl="true" source="c:\users\tge\documents\visual studio 2015\projects\managednvtristrip\managednvtristrip\nvtristriputility.h" line="58">
<summary>
Generates strips from the given triangle indices.
</summary>
</member>
</members>
</doc>