#include "sortcar.h"

/**
 * I the undersigned promise that the submitted assignment is my own work. While I was 
 * free to discuss ideas with others, the work contained is my own. I recognize that 
 * should this not be the case; I will be subject to penalties as outlined in the course 
 * syllabus. 
 * 
 * Name: Maxine Mayor
 * 
 * Red ID: 825551461
 * 
 * 
 * @brief sort car inventory
 * 
 * @param carInventory      input car inventory array
 * @param promotionOrder    car promotion order
 * @return vector<string>   sorted car inventory according to the car promotion order
 * 
 * Time complexity has to be linear: O(N), N is the size/length of the input car inventory array
 * Space complexity has to be constant: O(1), hint: sorting can be done by mutating 
 *                                      the input car inventory array.
 */

vector<string> SortCar::sortCarInventory(vector<string> carInventory, vector<string> promotionOrder) {
    int counter = 0;
    int sortedBoundary = 0;

    while (counter != carInventory.size()) {
        if (carInventory.at(sortedBoundary) == promotionOrder.at(0)) { //if correct, move on
            counter++;
            sortedBoundary++;
            continue;
        }
        else if (carInventory.at(sortedBoundary) != promotionOrder.at(0)) { //if not correct, swap
            counter++;
            if (counter >= carInventory.size()) { //ends loop if counter is out of bounds
                break;
            }
            if (carInventory.at(counter) == promotionOrder.at(0)) { 
                string tempVal = carInventory.at(sortedBoundary); //tempVal stores incorrect value
                carInventory.at(sortedBoundary) = carInventory.at(counter); //incorrect value = correct value
                carInventory.at(counter) = tempVal; //correct value = incorrect value
                sortedBoundary++;
            }
        }
    }

    counter = sortedBoundary;

    while (counter != carInventory.size()) {
        if (carInventory.at(sortedBoundary) == promotionOrder.at(1)) { //if correct, move on
            counter++;
            sortedBoundary++;
            continue;
        }
        else if (carInventory.at(sortedBoundary) != promotionOrder.at(1)) { //if not correct, swap
            counter++;

            if (counter >= carInventory.size()) { //ends loop if counter is out of bounds
                break;
            }
            if (carInventory.at(counter) == promotionOrder.at(1)) { 
                string tempVal = carInventory.at(sortedBoundary); //tempVal stores incorrect value
                carInventory.at(sortedBoundary) = carInventory.at(counter); //incorrect value = correct value
                carInventory.at(counter) = tempVal; //correct value = incorrect value
                sortedBoundary++;
            }
        }
    }

    return carInventory;

}