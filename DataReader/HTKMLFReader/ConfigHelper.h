#pragma once

#include <utility>
#include <string>
#include <vector>

namespace Microsoft { namespace MSR { namespace CNTK {

    class ConfigParameters;

    class ConfigHelper
    {
    public:
        static std::pair<size_t, size_t> GetContextWindow(const ConfigParameters& config);
        static size_t GetLabelDimension(const ConfigParameters& config);

        static void CheckFeatureType(const ConfigParameters& config);
        static void CheckLabelType(const ConfigParameters& config);

        static std::vector<std::wstring> GetMlfPaths(const ConfigParameters& config);
        static std::vector<std::wstring> ConfigHelper::GetFeaturePaths(const ConfigParameters& config);

        static size_t GetRandomizationWindow(const ConfigParameters& config);
        static std::wstring GetRandomizer(const ConfigParameters& config);
    };
}}}