#pragma once

namespace DETOUR
{
	class UNKN
	{
	public:
		typedef void(__cdecl* ExecuteFunction_t)();
		static ExecuteFunction_t ExecuteFunction;
	};

}