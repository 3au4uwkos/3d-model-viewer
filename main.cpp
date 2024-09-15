#include <iostream>
#include "FileManager.cpp"

int main() {
    FileManager fileManager;
    std::string modelPath, saveDirectory;

     //Simulate getting the model path and save directory from the user
   std::cout << "Enter the path to the 3D model: ";
    std::cin >> modelPath;

    std::cout << "Enter the directory where you want to save the model: ";
    std::cin >> saveDirectory;

    // Save the model
    fileManager.saveModel(modelPath, saveDirectory);

    // List saved models in the directory
    std::cout << "Listing models in the directory..." << std::endl;
    fileManager.listModels(saveDirectory);

    return 0;
}
