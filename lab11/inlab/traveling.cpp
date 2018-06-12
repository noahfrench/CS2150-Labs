/* 
 * Noah French (njf5cu)
 * Lab 11
 * 11/29/17
 * Filename: traveling.cpp
 * File Description: brute-force shortest-path solution
 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

#include "middleearth.h"

/** @brief Computes distance of a round trip.
 *
 * Calculates the total distance of a trip from the starting city, to each of the cities in dests in order, then back to the starting city.
 * @param me The world containing the cities.
 * @param start The city to start the round-trip from and end the round-trip at.
 * @param dests All the cities to be visited (not including the one starting/ending city) in order.
 */
float computeDistance (MiddleEarth &me, string start, vector<string> dests);
/** @brief Prints the route of a round trip.
 *
 * This method will print the entire route, starting and ending at the 'start' parameter.  The output is of the form: Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor.
 * @param start The city to start the round-trip from and end the round-trip at.
 * @param dests All the cities to be visited (not including the one starting/ending city) in order.
 */
void printRoute (string start, vector<string> dests);

int main (int argc, char **argv) {
  // check the number of parameters
  if ( argc != 6 ) {
    cout << "Usage: " << argv[0] << " <world_height> <world_width> "
	 << "<num_cities> <random_seed> <cities_to_visit>" << endl;
    exit(0);
  }
  // we'll assume the parameters are all well-formed
  int width, height, num_cities, rand_seed, cities_to_visit;
  sscanf (argv[1], "%d", &width);
  sscanf (argv[2], "%d", &height);
  sscanf (argv[3], "%d", &num_cities);
  sscanf (argv[4], "%d", &rand_seed);
  sscanf (argv[5], "%d", &cities_to_visit);
  // Create the world, and select your itinerary
  MiddleEarth me(width, height, num_cities, rand_seed);
  vector<string> dests = me.getItinerary(cities_to_visit);
  // set string start to be the first destination in list, then remove it from the dests list
  string start = dests[0];
  dests.erase(dests.begin()); 
  float thisDistance;
  vector<string> shortestPath;
  float shortestDistance;

  if (dests.size() <= 1) {
    shortestPath = dests;
    shortestDistance = computeDistance(me, start, shortestPath);
  }

  else {  
    // sort the destinations
    sort(dests.begin(), dests.end());
    // Set the shortestDistance to the first state.
    shortestDistance = computeDistance(me, start, dests);
    // cycle through all the permutations looking for the shortest total distance
    while (next_permutation(dests.begin(), dests.end())) {
      thisDistance = computeDistance(me, start, dests);
      if (thisDistance <= shortestDistance) {
	shortestDistance = thisDistance;
	shortestPath = dests;
      }
    }
  }

  // Output the best best-case time and path
  cout << "Minimum path has a distance of " << shortestDistance << ": ";
  printRoute(start, shortestPath);
  return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parameter, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  // Set distance to be the distance between start and first city
  float distance = me.getDistance(start, dests[0]);
  // Add the distances between all the destination cities
  for (int i = 0; i < dests.size() - 1; i++) 
    distance += me.getDistance(dests[i], dests[i + 1]);
  // Add the distance from the last city to the start
  distance += me.getDistance(dests[dests.size() - 1], start);
  return distance;			    
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
void printRoute (string start, vector<string> dests) {
  cout << start << " -> ";
  for (int i = 0; i < dests.size(); i++)
    cout << dests[i] << " -> ";
  cout << start << endl;  
}
