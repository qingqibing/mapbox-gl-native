#pragma once

#include <string>

namespace mbgl {

class ProgramParameters;

namespace programs {
namespace gl {

std::string fragmentSource(const ProgramParameters&, const char* fragmentSource);
std::string vertexSource(const ProgramParameters&, const char* vertexSource);
std::string programIdentifier(const std::string& vertexSource, const std::string& fragmentSource);

} // namespace gl
} // namespace programs
} // namespace mbgl
