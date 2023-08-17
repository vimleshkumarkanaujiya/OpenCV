# OpenCV
This repo contains practice example for beginners who are willing to learn OpenCV.


<h3>Follow the steps to install OpenCV library on Ubuntu Linux</h3>

#### Update and Upgrade the APT package manager.
`sudo apt update`

`sudo apt upgrade`

#### Install the required dependencies.

## Compiler
`sudo apt-get install build-essential cmake git`

## Required

`sudo apt-get install libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev`

## Optional (But recommended)

`sudo apt-get install python3-dev python3-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev`

## Optional
`sudo apt-get install libjasper-dev libdc1394-22-dev`


 
Some packages belong to repositories (Xenial and Focal) that are unknown to Ubuntu 22.04. So add the repository using <a href="https://www.google.com/search?q=Add+APT">Add APT</a>.

#### Clone the source from the official repository.
`git clone https://github.com/opencv/opencv.git`

#### Create a build directory for building the source.
`mkdir -p build && cd build`

#### Generate build scripts.
`cmake ../../opencv`

#### Build the source using cmake.
`make -j4`

#### Install the OpenCV package.
`sudo make install`

Installed successfully, check if it is installed as /usr/local/include/opencv4

`cd /usr/local/include/ && ls`

<b>opencv4</b>

# CMakeLists.txt
 CMakeLists build configuration file is in the root directory of this repo.

# Run the project
Run the project using the given commands.

`cmake .`

Run Makefile

`make`

Now the executable file is ready

`.\ABC`

It works fine.

