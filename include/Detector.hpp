/**
 * @file Detector.hpp
 * @author Driver: Abhijit Mahalle, Navigator: Hrushikesh Budhale
 * @brief 
 * @version 0.1
 * @date 2021-10-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef INCLUDE_DETECTOR_HPP_
#define INCLUDE_DETECTOR_HPP_

#include <vector>
#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio/videoio.hpp>


class Detector {
 public:
    Detector();
    explicit Detector(int);
    explicit Detector(std::string);
    void detect_humans();
    std::vector<cv::Rect> get_detections();
    std::vector<cv::Point2d> get_centroid();
    void show_output();
    ~Detector();
 private:
    void resize_bounding_box(cv::Rect*);
    cv::VideoCapture camera;
    cv::Mat frame;
    cv::HOGDescriptor hog_detector;
    std::vector<cv::Rect> detections;
    double fps;
};

#endif  // INCLUDE_DETECTOR_HPP_

