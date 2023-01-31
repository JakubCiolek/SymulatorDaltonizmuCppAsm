#include "pch.h"
#include "Simcpp.h"

void Simcpp(float xyz[])
{
    float sr = (3.063218f * xyz[0] - 1.393325f * xyz[1] - 0.475802f * xyz[2]);
    float sg= (-0.969243f * xyz[0] + 1.875966f * xyz[1] + 0.041555f * xyz[2]);
    float sb = (0.067871f * xyz[0] - 0.228834f * xyz[1] + 1.069251f * xyz[2]);

    // Convert xyz to rgb.
    float dr = (3.063218f * xyz[3] - 1.393325f * xyz[4] - 0.475802f * xyz[5]);
    float dg = (-0.969243f * xyz[3] + 1.875966f * xyz[4] + 0.041555f * xyz[5]);
    float db = (0.067871f * xyz[3] - 0.228834f * xyz[4] + 1.069251f * xyz[5]);
    xyz[0] = sr;
    xyz[1] = sg;
    xyz[2] = sb;
    xyz[3] = dr;
    xyz[4] = dg;
    xyz[5] = db;
}
