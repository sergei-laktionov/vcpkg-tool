#pragma once

#include <vcpkg/fwd/vcpkgpaths.h>

#include <vcpkg/base/span.h>
#include <vcpkg/base/stringview.h>

#include <string>

namespace vcpkg
{
    int run_configure_environment_command(const VcpkgPaths& paths, View<std::string> args);
    int run_configure_environment_command(const VcpkgPaths& paths, StringView arg0, View<std::string> args);
}
