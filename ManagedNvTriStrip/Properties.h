#pragma once

// Defines a read-only property.
#define PROP_R(type, name)\
	property type name\
	{\
	type get();\
	}

// Defines a property that is only writable internally.
#define PROP_RIW(type, name)\
	property type name\
	{\
	type get();\
	internal: void set(type value);\
	}

// Defines a readable and writable property.
#define PROP_RW(type, name)\
	property type name\
	{\
	type get();\
	void set(type value);\
	}

// Defines a readable and writable property with an auto variable setter.
#define PROP_R_AUTO(type, name, varName)\
	property type name \
	{ \
		type get() \
		{ \
			return varName; \
		} \
	}

// Defines a readable and writable property with an auto variable setter.
#define PROP_RW_AUTO(type, name, varName)\
	property type name \
	{ \
		type get() \
		{ \
			return varName; \
		} \
		void set(type value)\
		{\
			varName = value; \
		}\
	}