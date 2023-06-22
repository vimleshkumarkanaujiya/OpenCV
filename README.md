# OpenCV
This repo contains practice example for beginners who are willing to learn OpenCV.


<h3>Follow the steps to install OpenCV library on Ubuntu Linux</h3>

#### Update and Upgrade the APT package manager.
`sudo apt update`

`sudo apt upgrade`

#### Install the required dependencies.
`sudo apt install build-essential cmake git libgtk-3-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev`


`sudo apt install python-all-dev python3-numpy libtbb2 libtbb-dev`

`sudo apt install libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac- 
 dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev`
 
Some Packages belong to repositories (Xenial and Focal) that are unknown to Ubuntu 22.04. So add the repository using <a href="https://www.google.com/search?q=Add+APT">Add APT</a>.

#### Clone the source from the official repository.
`git clone https://github.com/opencv/opencv.git`

#### Create a build directory for building the source.
`mkdir -p build && cd build`

#### Generate build scripts.
`cmake ../opencv`

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

