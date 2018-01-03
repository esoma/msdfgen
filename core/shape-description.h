
#pragma once

#include "shared.h"

#include <cstdlib>
#include <cstdio>
#include "Shape.h"

namespace msdfgen {

/// Deserializes a text description of a vector shape into output.
bool MSDFGEN_SHARED readShapeDescription(FILE *input, Shape &output, bool *colorsSpecified = NULL);
bool MSDFGEN_SHARED readShapeDescription(const char *input, Shape &output, bool *colorsSpecified = NULL);
/// Serializes a shape object into a text description.
bool MSDFGEN_SHARED writeShapeDescription(FILE *output, const Shape &shape);

}
