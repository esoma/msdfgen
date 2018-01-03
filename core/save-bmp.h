
#pragma once

#include "shared.h"

#include "Bitmap.h"

namespace msdfgen {

/// Saves the bitmap as a BMP file.
bool MSDFGEN_SHARED saveBmp(const Bitmap<float> &bitmap, const char *filename);
bool MSDFGEN_SHARED saveBmp(const Bitmap<FloatRGB> &bitmap, const char *filename);

}
