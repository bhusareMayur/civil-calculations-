#include <iostream>
#include <limits>
using namespace std;

 
int calculateMaterials(int mixType, double volume, int structureType) {
    double bricks = 0, aggregate, cementBags, sand, steel;
    int t;

    double cementRatio, sandRatio, aggregateRatio, totalRatio;

    switch (mixType) {
        case 15:
            bricks = 500 * volume; 
            cementRatio = 1; 
            sandRatio = 2; 
            aggregateRatio = 4; 
            totalRatio = cementRatio + sandRatio + aggregateRatio;
            break;
        case 20:
              bricks = 550 * volume; 
              cementRatio = 1;
              sandRatio = 1.5;
              aggregateRatio = 3; 
              totalRatio = cementRatio + sandRatio + aggregateRatio;
            break;
        case 25:
            bricks = 600 * volume;  
            cementRatio = 1; 
            sandRatio = 1; 
            aggregateRatio = 2; 
            totalRatio = cementRatio + sandRatio + aggregateRatio;
            break;
        case 30:
            bricks = 650 * volume;  
            cementRatio = 1; 
            sandRatio = 0.75; 
            aggregateRatio = 1.5; 
            totalRatio = cementRatio + sandRatio + aggregateRatio;
            break;
        case 40:
            bricks = 700 * volume;  
            cementRatio = 1; 
            sandRatio = 0.5; 
            aggregateRatio = 1; 
            totalRatio = cementRatio + sandRatio + aggregateRatio;
            break;
        default:
            cout << "Invalid mix type! Try again!" << endl;
            return 2;  
    }

    
    cementBags = ((cementRatio / totalRatio) * volume * 1440 / 50); 
    sand = ((sandRatio / totalRatio) * volume);
    aggregate =((aggregateRatio / totalRatio) * volume);
    steel =( 0.0001 * volume * mixType);  

    
    if (structureType == 1) {
        cout << "Number of bricks: " << bricks << endl;
    } else {
        cout << "No bricks required." << endl;
    }
    cout << "Amount of aggregate (in cubic meters): " << aggregate << endl;
    cout << "Number of cement bags: " << cementBags << endl;
    cout << "Amount of sand (in cubic meters): " << sand << endl;
    cout << "Amount of steel (in metric tons): " << steel << endl;

    
    double totalVolume = aggregate + (cementBags * 50 / 1440) + sand + steel;
    cout << "Total volume of materials used (in cubic meters): " << totalVolume << endl;

    cout << "If you want to continue then press 1 otherwise press any number: ";
    cin >> t;

    if (t != 1) {
        cout<<"\n\n\n\n\n\nProgram ended successfully !!!" << endl;
        return 1; // End program
    } else {
        return 4; // Continue
    }
}

int main() {
    int mixType, structureType, a;
    double length, height, width, volume;
    bool continueProgram = true;

    do {
        system("cls");
        cout << "Enter the type of structure: \n";
        cout << "1. Wall\n";
        cout << "2. Slab\n";
        cout << "3. Beam\n";
        cout << "4. End program\n";
        cout << "Enter your choice: ";
        cin >> structureType;

        if (cin.fail() || structureType < 1 || structureType > 4) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid structure type! Please try again." << endl;
            cin.get();  
            continue;
        }

        switch (structureType) {
            case 1: // Wall
                system("cls");
                cout << "Enter the height and length of the wall (in meters): ";
                cin >> height >> length;
                width = 0.2; // Assuming standard wall width
                break;
            case 2: // Slab
                system("cls");
                cout << "Enter the length, width, and thickness of the slab (in meters): ";
                cin >> length >> width >> height;
                break;
            case 3: // Beam
                system("cls");
                cout << "Enter the length, width, and height of the beam (in meters): ";
                cin >> length >> width >> height;
                break;
            case 4:
                system("cls");
                cout << "\n\n\n\n\nProgram ended successfully !!!\n\n\n" << endl;
                return 0; // End program
        }

        if (cin.fail() || length <= 0 || width <= 0 || height <= 0) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid dimensions! Please try again." << endl;
            cin.get();  
            continue;
        }

        volume = length * height * width;
        system("cls");
        cout << "Enter the concrete mix type (15, 20, 25, 30, or 40): ";
        cin >> mixType;

        if (cin.fail() || (mixType != 15 && mixType != 20 && mixType != 25 && mixType != 30 && mixType != 40)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid mix type! Please try again." << endl;
            cin.get();  
            continue;
        }

        a = calculateMaterials(mixType, volume, structureType);

        if (a == 1) {
            continueProgram = false; 
        }

        cout << "\n\n\n\n\n\n";
    } while (continueProgram);

    return 0;
}
