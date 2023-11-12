#include <iostream>
#include <vector>

int main() {
    int numSizes = 10; // Number of cluster sizes to model
    double addRate = 0.1;
    double loseRate = 0.05; 

    std::vector<double> clusters(numSizes, 0.0); // Initialize cluster concentrations
    clusters[0] = 1.0; // Initial concentration of the smallest cluster

    double dt = 0.01; // Time step
    double time = 0.0; // Initial time
    double endTime = 1.0; // End time

    while (time < endTime) {
        std::vector<double> newClusters = clusters;

        for (int i = 0; i < numSizes; ++i) {
            if (i > 0) {
                newClusters[i] += addRate * clusters[i - 1] * dt; // Gain from smaller cluster
                newClusters[i - 1] -= addRate * clusters[i - 1] * dt; // Loss to larger cluster
            }
            if (i < numSizes - 1) {
                newClusters[i] -= loseRate * clusters[i] * dt; // Loss to smaller cluster
                newClusters[i + 1] += loseRate * clusters[i] * dt; // Gain from larger cluster
            }
        }

        clusters = newClusters;
        time += dt;

        std::cout << "Time: " << time << " ";
        for (double concentration : clusters) {
            std::cout << concentration << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}