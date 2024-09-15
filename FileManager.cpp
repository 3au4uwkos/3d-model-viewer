#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

namespace fs = std::filesystem;

class FileManager {
public:
    FileManager() = default;

    void saveModel(const std::string& modelPath, const std::string& saveDirectory) {
        fs::path sourcePath(modelPath);
        fs::path targetPath = fs::path(saveDirectory) / sourcePath.filename();

        try {
            fs::copy(sourcePath, targetPath, fs::copy_options::overwrite_existing);
            std::cout << "Model saved to: " << targetPath << std::endl;
        }
        catch (fs::filesystem_error& e) {
            std::cerr << "Error saving model: " << e.what() << std::endl;
        }
    }

    void FileManager::listModels(const std::string& directory) {
        fs::path dirPath(directory);

        // Check if the directory exists and is indeed a directory
        if (!fs::exists(dirPath)) {
            std::cerr << "Error: Directory does not exist!" << std::endl;
            return;
        }

        if (!fs::is_directory(dirPath)) {
            std::cerr << "Error: Path is not a directory!" << std::endl;
            return;
        }

        std::cout << "Models in directory: " << directory << std::endl;

        // Iterate through files in the directory and print their names
        try {
            for (const auto& entry : fs::directory_iterator(dirPath)) {
                if (entry.is_regular_file()) {
                    std::cout << entry.path().filename() << std::endl;
                }
            }
        }
        catch (const fs::filesystem_error& e) {
            std::cerr << "Filesystem error: " << e.what() << std::endl;
        }
    }

};

