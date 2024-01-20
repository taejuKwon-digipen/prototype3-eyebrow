#pragma once

#include <vector>
#include <exception>
#include <iostream>
#include <string>
#include <stdexcept>
#include <doodle/doodle.hpp>
#include <doodle/drawing.hpp>
#include <doodle/environment.hpp>
#include <doodle/input.hpp>
#include <doodle/random.hpp>
#include <doodle/window.hpp>
#include <map>
#include <fstream>
#include <istream>
#include <ostream>
#include <filesystem>

#include "eyebrows.h"
#include "sketch.h"
#include "ball.h"

constexpr int windowX = 800;
constexpr int windowY = 600;

inline sketch Sketch;
inline ball Ball;
inline eyebrow Eyebrow;