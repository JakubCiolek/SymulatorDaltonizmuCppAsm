#pragma once

#ifdef Simcpp_API
#undef Simcpp_API
#define Simcpp_API __declspec(dllexport)
#else
#define Simcpp_API __declspec(dllimport)
#endif

extern "C" void Simcpp_API Simcpp(float xyz[]);