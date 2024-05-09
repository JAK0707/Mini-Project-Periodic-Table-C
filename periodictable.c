#include <stdio.h>

// Structure to represent an element
struct Element {
    char name[20];
    int atomicNumber;
    int groupNumber;
    int periodNumber;
    char state[10];
};

// Function to display information about an element
void displayElement(struct Element elements[], int atomicNumber) {
    printf("\nElement: %s\n", elements[atomicNumber - 1].name);
    printf("Group Number: %d\n", elements[atomicNumber - 1].groupNumber);
    printf("Period Number: %d\n", elements[atomicNumber - 1].periodNumber);
    printf("State of Matter: %s\n", elements[atomicNumber - 1].state);
}

int main() {
    // Array of structures to hold information about elements
    struct Element elements[] = {
        {"Hydrogen", 1, 1, 1, "Gas"}, {"Helium", 2, 18, 1, "Gas"}, {"Lithium", 3, 1, 2, "Solid"},
        {"Beryllium", 4, 2, 2, "Solid"}, {"Boron", 5, 13, 2, "Solid"}, {"Carbon", 6, 14, 2, "Solid"},
        {"Nitrogen", 7, 15, 2, "Gas"}, {"Oxygen", 8, 16, 2, "Gas"}, {"Fluorine", 9, 17, 2, "Gas"},
        {"Neon", 10, 18, 2, "Gas"}, {"Sodium", 11, 1, 3, "Solid"}, {"Magnesium", 12, 2, 3, "Solid"},
        {"Aluminum", 13, 13, 3, "Solid"}, {"Silicon", 14, 14, 3, "Solid"}, {"Phosphorus", 15, 15, 3, "Solid"},
        {"Sulfur", 16, 16, 3, "Solid"}, {"Chlorine", 17, 17, 3, "Gas"}, {"Argon", 18, 18, 3, "Gas"},
        {"Potassium", 19, 1, 4, "Solid"}, {"Calcium", 20, 2, 4, "Solid"}, {"Scandium", 21, 3, 4, "Solid"},
        {"Titanium", 22, 4, 4, "Solid"}, {"Vanadium", 23, 5, 4, "Solid"}, {"Chromium", 24, 6, 4, "Solid"},
        {"Manganese", 25, 7, 4, "Solid"}, {"Iron", 26, 8, 4, "Solid"}, {"Cobalt", 27, 9, 4, "Solid"},
        {"Nickel", 28, 10, 4, "Solid"}, {"Copper", 29, 11, 4, "Solid"}, {"Zinc", 30, 12, 4, "Solid"},
        {"Gallium", 31, 13, 4, "Solid"}, {"Germanium", 32, 14, 4, "Solid"}, {"Arsenic", 33, 15, 4, "Solid"},
        {"Selenium", 34, 16, 4, "Solid"}, {"Bromine", 35, 17, 4, "Liquid"}, {"Krypton", 36, 18, 4, "Gas"},
        {"Rubidium", 37, 1, 5, "Solid"}, {"Strontium", 38, 2, 5, "Solid"}, {"Yttrium", 39, 3, 5, "Solid"},
        {"Zirconium", 40, 4, 5, "Solid"}, {"Niobium", 41, 5, 5, "Solid"}, {"Molybdenum", 42, 6, 5, "Solid"},
        {"Technetium", 43, 7, 5, "Solid"}, {"Ruthenium", 44, 8, 5, "Solid"}, {"Rhodium", 45, 9, 5, "Solid"},
        {"Palladium", 46, 10, 5, "Solid"}, {"Silver", 47, 11, 5, "Solid"}, {"Cadmium", 48, 12, 5, "Solid"},
        {"Indium", 49, 13, 5, "Solid"}, {"Tin", 50, 14, 5, "Solid"}, {"Antimony", 51, 15, 5, "Solid"},
        {"Tellurium", 52, 16, 5, "Solid"}, {"Iodine", 53, 17, 5, "Solid"}, {"Xenon", 54, 18, 5, "Gas"},
        {"Cesium", 55, 1, 6, "Solid"}, {"Barium", 56, 2, 6, "Solid"}, {"Lanthanum", 57, 3, 6, "Solid"},
        {"Cerium", 58, 3, 7, "Solid"}, {"Praseodymium", 59, 3, 8, "Solid"}, {"Neodymium", 60, 3, 9, "Solid"},
        {"Promethium", 61, 3, 10, "Solid"}, {"Samarium", 62, 3, 11, "Solid"}, {"Europium", 63, 3, 12, "Solid"},
        {"Gadolinium", 64, 3, 13, "Solid"}, {"Terbium", 65, 3, 14, "Solid"}, {"Dysprosium", 66, 3, 15, "Solid"},
        {"Holmium", 67, 3, 16, "Solid"}, {"Erbium", 68, 3, 17, "Solid"}, {"Thulium", 69, 3, 18, "Solid"},
        {"Ytterbium", 70, 3, 18, "Solid"}, {"Lutetium", 71, 3, 18, "Solid"}, {"Hafnium", 72, 4, 6, "Solid"},
        {"Tantalum", 73, 5, 6, "Solid"}, {"Tungsten", 74, 6, 6, "Solid"}, {"Rhenium", 75, 7, 6, "Solid"},
        {"Osmium", 76, 8, 6, "Solid"}, {"Iridium", 77, 9, 6, "Solid"}, {"Platinum", 78, 10, 6, "Solid"},
        {"Gold", 79, 11, 6, "Solid"}, {"Mercury", 80, 12, 6, "Liquid"}, {"Thallium", 81, 13, 6, "Solid"},
        {"Lead", 82, 14, 6, "Solid"}, {"Bismuth", 83, 15, 6, "Solid"}, {"Polonium", 84, 16, 6, "Solid"},
        {"Astatine", 85, 17, 6, "Solid"}, {"Radon", 86, 18, 6, "Gas"}, {"Francium", 87, 1, 7, "Solid"},
        {"Radium", 88, 2, 7, "Solid"}, {"Actinium", 89, 3, 7, "Solid"}, {"Thorium", 90, 3, 7, "Solid"},
        {"Protactinium", 91, 3, 7, "Solid"}, {"Uranium", 92, 3, 7, "Solid"}, {"Neptunium", 93, 3, 7, "Solid"},
        {"Plutonium", 94, 3, 7, "Solid"}, {"Americium", 95, 3, 7, "Solid"}, {"Curium", 96, 3, 7, "Solid"},
        {"Berkelium", 97, 3, 7, "Solid"}, {"Californium", 98, 3, 7, "Solid"}, {"Einsteinium", 99, 3, 7, "Solid"},
        {"Fermium", 100, 3, 7, "Solid"}, {"Mendelevium", 101, 3, 7, "Solid"}, {"Nobelium", 102, 3, 7, "Solid"},
        {"Lawrencium", 103, 3, 7, "Solid"}, {"Rutherfordium", 104, 4, 7, "Solid"}, {"Dubnium", 105, 5, 7, "Solid"},
        {"Seaborgium", 106, 6, 7, "Solid"}, {"Bohrium", 107, 7, 7, "Solid"}, {"Hassium", 108, 8, 7, "Solid"},
        {"Meitnerium", 109, 9, 7, "Solid"}, {"Darmstadtium", 110, 10, 7, "Solid"}, {"Roentgenium", 111, 11, 7, "Solid"},
        {"Copernicium", 112, 12, 7, "Solid"}, {"Nihonium", 113, 13, 7, "Solid"}, {"Flerovium", 114, 14, 7, "Solid"},
        {"Moscovium", 115, 15, 7, "Solid"}, {"Livermorium", 116, 16, 7, "Solid"}, {"Tennessine", 117, 17, 7, "Solid"},
        {"Oganesson", 118, 18, 7, "Gas"}
    };

    int atomicNumber;

    printf("Enter the atomic number of the element: ");
    scanf("%d", &atomicNumber);

    if (atomicNumber < 1 || atomicNumber > 118) {
        printf("Invalid atomic number. Atomic number must be between 1 and 118.\n");
    } else {
        displayElement(elements, atomicNumber);
    }

    return 0;
}
