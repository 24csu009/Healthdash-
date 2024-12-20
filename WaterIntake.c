#include <stdio.h>

// Function to calculate remaining water intake
int calculateRemainingWater(int glassesDrunk, int workoutMinutes) {
    int baseGoal = 8;  // Base goal is 8 glasses per day
    int additionalWater = workoutMinutes / 30;  // Additional water based on workout duration
    int totalGoal = baseGoal + additionalWater;
    return totalGoal - glassesDrunk;
}

int main() {
    int glassesDrunk;
    int workoutMinutes;
    int remainingGlasses;

    // Prompt user for input
    printf("Enter the number of glasses of water you have drunk today: ");
    scanf("%d", &glassesDrunk);

    printf("Enter the number of minutes you have worked out today: ");
    scanf("%d", &workoutMinutes);

    // Calculate remaining water intake
    remainingGlasses = calculateRemainingWater(glassesDrunk, workoutMinutes);

    // Provide suggestion
    if (remainingGlasses > 0) {
        printf("You need to drink %d more glasses of water to meet your goal.\n", remainingGlasses);
    } else {
        printf("Great job! You have met your water intake goal for the day.\n");
    }

    return 0;
}
