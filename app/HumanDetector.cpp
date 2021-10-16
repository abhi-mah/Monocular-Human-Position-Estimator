/**
 * @file HumanDetector.cpp
 * @author Driver: Abhijit Mahalle, Navigator: Hrushikesh Budhale
 * @brief Library for HumanDetector class
 * @version 0.1
 * @date 2021-10-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../include/HumanDetector.hpp"
#include <iostream>

/**
 * @brief Default Constructor for Human Detector class
 */
HumanDetector::HumanDetector() {
    // todo: initialize detector class object
    //       and set camera properties
    img_height = 0;
    img_width = 0;
    distance_to_detection_ht_ratio = 0;
}

/**
 * @brief Method that returns a map of ids of detected humans and 
 *        their 3d positions
 */
void HumanDetector::track_positions() {
    // todo: implementing a method that returns a map of ids of
    // detected humans and their positions
}

/**
 * @brief Setter method to set the height and width of camera frame.
 * 
 * @param height Image height in pixel
 * @param width Image width in pixel
 */
void HumanDetector::set_camera_properties(int height, int width) {
    // todo: implementing a method that sets frame size of camera
}

/**
 * @brief Setter method to set the ratio of distance of human
 *        from camera to bounding box height
 * 
 */
void HumanDetector::set_distance_to_detection_ht_ratio() {
    // todo: implementing a method that sets the ratio of known human
    // distance from camera to the corresponding height of bounding box
    // in pixels
}

/**
 * @brief Method that outputs 3d position of detected humans using the set
 *        value of distance_to_detection_ht_ratio
 * 
 * @return std::vector<cv::Point3d> 
 */
std::vector<cv::Point3d> HumanDetector::get_3d_position() {
    // todo: implementing a method that outputs 3d position of detected
    // humans using the set value of distance_to_detection_ht_ratio
    std::vector<cv::Point3d> v;
    return v;
}

/**
 * @brief Method to convert list of 3d points to map, with each
 *        position assigned to an id.
 * 
 * @return std::map<int, std::vector<cv::Point3d>> 
 */
std::map<int, std::vector<cv::Point3d>> HumanDetector::assign_ids() {
    std::map<int, std::vector<cv::Point3d>> v;
    // todo: implement logic to assign ids and return the map
    //        with associated positions
    return v;
}

/**
 * @brief Estimates distance of a human using camera properties and
 *        bounding box size
 * @param bbox Bounding box of type cv::Rect
 * @return double 
 */
double HumanDetector::get_depth_estimate(cv::Rect bbox) {
    double distance = 0;
    // todo : implement logic to estimate distance of object in meter
    return distance;
}
