#include <stdio.h>

// Function to display information about an element
void displayElement(int atomicNumber) {
    // Atomic numbers and corresponding element information
    char* elements[] = {
        "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon",
        "Nitrogen", "Oxygen", "Fluorine", "Neon", "Sodium", "Magnesium",
        "Aluminum", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon",
        "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium",
        "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium",
        "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton", "Rubidium",
        "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium",
        "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium", "Tin",
        "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum",
        "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium",
        "Gadolinium", "Terbium", "Dysprosium", "Holmium", "Erbium", "Thulium",
        "Ytterbium", "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium",
        "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead",
        "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium",
        "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium",
        "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium", "Mendelevium",
        "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium",
        "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium",
        "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"
    };

    // Group number of elements
    int group[] = {
        1, 18, 1, 2, 13, 14, 15, 16, 17, 18, 1, 2, 13, 14, 15, 16, 17, 18,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
        1, 2, 13, 14, 15, 16, 17, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 3, 4, 5, 6, 7, 8, 9, 10
    };

    // Period number of elements
    int period[] = {
        1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
        6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7
    };

    // State of matter of elements
    char* state[] = {
        "Gas", "Gas", "Solid", "Solid", "Solid", "Solid", "Gas",
        "Gas", "Gas", "Gas", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Gas", "Gas", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Liquid", "Gas",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid",
        "Solid", "Solid", "Solid", "Solid", "Solid", "Solid", "Solid"
    };

    // Display information
    printf("\nElement: %s\n", elements[atomicNumber - 1]);
    printf("Group Number: %d\n", group[atomicNumber - 1]);
    printf("Period Number: %d\n", period[atomicNumber - 1]);
    printf("State of Matter: %s\n", state[atomicNumber - 1]);
}

int main() {
    int atomicNumber;

    printf("Enter the atomic number of the element: ");
    scanf("%d", &atomicNumber);

    if (atomicNumber < 1 || atomicNumber > 118) {
        printf("Invalid atomic number. Atomic number must be between 1 and 118.\n");
    } else {
        displayElement(atomicNumber);
    }

    return 0;
}
