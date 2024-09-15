#pragma once
#include <string>

class FileManager {
public:
    void saveModel(const std::string& modelPath, const std::string& saveDirectory);
    void listModels(const std::string& directory);
};
