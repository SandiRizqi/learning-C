#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read the image
    string url;
    cout << "Masukan image url : " <<  endl;
    cin >> url;
    cv::Mat image = cv::imread(url);
    
    // Check if image is loaded successfully
    if (image.empty()) {
        std::cerr << "Error: Could not open or find the image!" << std::endl;
        return -1;
    }
    
    // Convert the image to grayscale
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);
    
    // Save the grayscale image
    cv::imwrite("output.jpg", grayImage);
    
    // Display images
    cv::imshow("Original Image", image);
    cv::imshow("Grayscale Image", grayImage);
    
    cv::waitKey(0); // Wait for a key press
    return 0;
}
