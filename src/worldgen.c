// Add a variable for ore displacement
#define OREDISPLACEMENT 30

// Existing code...

void generateOres() {
    // Use OREDISPLACEMENT in ore generation checks
    if (condition_to_check_for_ore) {
        int orePosition = basePosition + OREDISPLACEMENT;
        // Further logic...
    }
    
    // Other checks where 30 was previously hardcoded
    if (otherCondition) {
        int anotherPosition = basePosition + OREDISPLACEMENT;
        // Further logic...
    }
}