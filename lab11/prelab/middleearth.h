#include <iostream>
#include <vector>
#include <string>
#include <map>

#ifndef MIDDLEEARTH_H
#define MIDDLEEARTH_H

using namespace std;

// see the comments in the lab11 write-up, or in middleearth.cpp

/** @brief A custom world class.
 *
 * This class creates a graph of Middle Earth cities randomly selected from a list. Calculates a random position within the world confines for each city.
 */ 
class MiddleEarth {
 private:
  int num_city_names; /**< The number of cities that the MiddleEarth object contains. */
  int xsize; /**< The x length of the world. */
  int ysize; /**< The y length of the world. */
  vector<float> xpos; /**< List of the x positions of the object's cities. */
  vector<float> ypos; /**< List of the y positions of the object's cities. */
  vector<string> cities; /**< List of the object's cities. */
  float *distances; /**< Adjacency matrix of the object's cities. The "weight" is the distance between cities calculated using xpos and ypos. */
  map<string, int> indices; /**< Hash of city indices. */

 public:
  /** @brief Iluvatar, the creator of Middle-Earth.
   *
   * MiddleEarth class constructor. Uses a seed to randomly choose cities from a list. Then, randomly computes city positions within the confines of the world. Then, creates an adjacency matrix using the distances between cities as the weight. Stores indices in a 2-D array for faster searches. 
   * @param xsize The x length of the world.
   * @param ysize The y length of the world.
   * @param numcities The number of cities in to be put in the world.
   * @param seed A seed to be used for randomized operations on the MiddleEarth object.
   */
  MiddleEarth (int xsize, int ysize, int numcities, int seed);
  /** @brief Sauron, the destructor of Middle-Earth.
   *
   * Deletes the dynamically allocated adjacency matrix.
   */
  ~MiddleEarth();
  /** @brief Prints out the info on the created world.
   *
   * Prints the number of cities, the names of the cities, and the x and y positions of each city.
   */
  void print();
  /** @brief Prints a tab-separated table of the distances.
   */
  void printTable();
  /** @brief Returns the distance between the two passed cities.
   * 
   * @param city1 The first city.
   * @param city2 The second city.
   * @return The distance (float) between the two passed cities.
   */
  float getDistance (string city1, string city2);
  /** @brief Returns the list of cities to travel to.
   * 
   * Gives a randomized list of cities that could be visited.
   * @param length The number of cities to be visited.
   */
  vector<string> getItinerary(unsigned int length);
};

#endif
