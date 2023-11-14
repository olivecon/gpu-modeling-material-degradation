#include <iostream>
#include <vector>

const int DAY_IN_SECONDS = 86400;
int numSizes = 100; // Number of cluster sizes to model
double addRate = 0.1;
double loseRate = 0.05; 
double dt = DAY_IN_SECONDS; // Time step
double current_time = 0.0; // Initial time
double endTime = DAY_IN_SECONDS * 365; // End time

// Make newClusters into a pass by address parameter
void do_cluster_calculation(int i, std::vector<double> newClusters, std::vector<double> clusters) {
    if (i > 0) {
        newClusters[i] += addRate * clusters[i - 1] * dt; // Gain from smaller cluster
        newClusters[i - 1] -= addRate * clusters[i - 1] * dt; // Loss to larger cluster
    }
    if (i < numSizes - 1) {
        newClusters[i] -= loseRate * clusters[i] * dt; // Loss to smaller cluster
        newClusters[i + 1] += loseRate * clusters[i] * dt; // Gain from larger cluster
    }
}


int main() {

    std::vector<double> clusters(numSizes, 0.0); // Initialize cluster concentrations
    clusters[0] = 1.0; // Initial concentration of the smallest cluster

    while (current_time < endTime) {
        std::vector<double> newClusters = clusters;

        for (int i = 0; i < numSizes; ++i) {

            // Open thread here that does the do_cluster_calculation function


            // if (i > 0) {
            //     newClusters[i] += addRate * clusters[i - 1] * dt; // Gain from smaller cluster
            //     newClusters[i - 1] -= addRate * clusters[i - 1] * dt; // Loss to larger cluster
            // }
            // if (i < numSizes - 1) {
            //     newClusters[i] -= loseRate * clusters[i] * dt; // Loss to smaller cluster
            //     newClusters[i + 1] += loseRate * clusters[i] * dt; // Gain from larger cluster
            // }
        }

        clusters = newClusters;
        current_time += dt;

        std::cout << "Time: " << current_time << " ";
        for (double concentration : clusters) {
            std::cout << concentration << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}