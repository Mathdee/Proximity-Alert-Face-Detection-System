# Proximity-Alert-Face-Detection-System
=====================================================

This application is a real-time face detection system that uses computer vision to monitor proximity and alert users when they get too close to the screen. It's designed to promote maintaining a healthy distance from computer screens.

Key Features:
-------------
- Real-time Face Detection: Utilizes OpenCV and Haar Cascade classifiers for efficient face detection.
- Proximity Alert: Triggers a visual alert when a face gets too close to the camera.
- Multi-threading: Implements concurrent processing for smooth video capture and analysis.
- Customizable Threshold: Easily adjustable proximity threshold to suit different setups and preferences.

Getting Started:
================

Prerequisites:
~~~~~~~~~~~~~~
- C++ compiler (supporting C++11 or later)
- OpenCV 4.x (You can download OpenCV from: https://github.com/opencv/opencv/releases)
- CMake (for building the project)
~~~~~~~~~~~~~~

Usage:
------
~~~~~~~~~~~~~~
1. Ensure OpenCV is properly installed on your system.

2. Compile the application using your preferred C++ compiler, linking against OpenCV libraries.

3. Run the compiled executable.

4. Position yourself in front of the camera. The application will start detecting faces immediately.

5. Move closer to or further from the camera to see the proximity alert in action.

~~~~~~~~~~~~~~

Configuration:
--------------
You can adjust the `FACE_SIZE_THRESHOLD` constant in the source code to change the proximity at which the alert is triggered. Rebuild the project after making changes.
Have Fun with it!!!

Contributing:
=============
Contributions to this project are welcome! Please fork the repository and submit a pull request with your improvements.

License:
========
This project is licensed under the MIT License - see the LICENSE.md file for details.

Acknowledgments:
================
Some of the code used in this project was sourced from KNOWLEDGE DOCTOR.
