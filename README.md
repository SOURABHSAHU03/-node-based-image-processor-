# -node-based-image-processor-

# Image Processing Application

![Application Screenshot](screenshot.png) <!-- Add a screenshot if available -->

A comprehensive Qt-based image processing application with OpenCV integration, offering a wide range of image manipulation and analysis tools.

## ✨ Features

### 🖼️ Core Functionality
- **Image Loading**: Supports JPG, PNG, BMP formats
- **Image Saving**: Export processed images in multiple formats
- **Undo/Redo**: Full history stack for all operations

### 🛠️ Image Processing Tools
- **Basic Operations**:
  - Grayscale conversion
  - Horizontal/Vertical flipping
  - Image inversion (negative)
  - Cropping with center alignment
  - Brightness adjustment
  - Saturation control
  - Hue modification

- **Advanced Filters**:
  - Gaussian blur with adjustable kernel size
  - Gradient effects
  - Multiple thresholding methods
  - Edge detection (Sobel and Canny)
  - Adaptive thresholding

- **Special Features**:
  - Real-time histogram visualization
  - Parameter sliders for fine control
  - Operation preview before applying

## 📦 Installation & Build Instructions

### Prerequisites
- Qt 5.15 or later
- OpenCV 4.5 or later
- C++17 compatible compiler

### Windows

Clone the repository
git clone https://github.com/SOURABHSAHU03/-node-based-image-processor-.git
cd image-processor

# Create build directory
mkdir build
cd build

# Configure with CMake (adjust paths as needed)
cmake -G "Visual Studio 16 2019" -A x64 -DQt5_DIR="C:/Qt/5.15.2/msvc2019_64/lib/cmake/Qt5" -DOpenCV_DIR="C:/opencv/build" ..

# Build
cmake --build . --config Release




# linux / macos
git clone https://github.com/yourusername/image-processor.git
cd image-processor
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH="/path/to/Qt/5.15.2/gcc_64" ..
make -j4
